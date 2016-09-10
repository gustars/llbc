/**
 * @file    _Ini.cpp
 * @author  Longwei Lai<lailongwei@126.com>
 * @date    2016/09/06
 * @version 1.0
 *
 * @brief
 */

#include "csllbc/common/Export.h"

#include "csllbc/core/config/_Ini.h"

namespace
{
    csllbc_Ini_IniSection *_GetAllSections(LLBC_Ini *ini, int *sectionCount)
    {
        const std::map<LLBC_String, LLBC_IniSection *> &sections = ini->GetAllSections();
        if ((*sectionCount = static_cast<int>(sections.size())) == 0)
            return NULL;

        int sectionIdx = 0;
        csllbc_Ini_IniSection *nativeSections = LLBC_Malloc(csllbc_Ini_IniSection, sizeof(csllbc_Ini_IniSection) * *sectionCount);
        for (std::map<LLBC_String, LLBC_IniSection *>::const_iterator sectionIt = sections.begin();
             sectionIt != sections.end();
             sectionIt++)
        {
            // Get section name.
            const LLBC_String &sectionName = sectionIt->first;
            csllbc_Ini_IniSection *nativeSection = nativeSections + sectionIdx++;
            nativeSection->sectionName = 
                csllbc_PInvokeUtil::BuildCSharpStr(sectionName, &nativeSection->sectionNameLen);
            
            // Get all key-values pair in this section.
            int valueIdx = 0;
            const LLBC_IniSection *section = sectionIt->second;

            const std::map<LLBC_String, LLBC_Variant> &values = section->GetAllValues();

            size_t valueCount = values.size();
            nativeSection->count = static_cast<int>(values.size());
            if (valueCount == 0)
            {
                nativeSection->keys = NULL;
                nativeSection->keysLen = NULL;
                nativeSection->values = NULL;
                nativeSection->valuesLen = NULL;
                continue;
            }

            nativeSection->keys = LLBC_Malloc(char *, sizeof(char *) * valueCount);
            nativeSection->values = LLBC_Malloc(char *, sizeof(char *) * valueCount);
            nativeSection->keysLen = LLBC_Malloc(int, sizeof(int) * valueCount);
            nativeSection->valuesLen = LLBC_Malloc(int, sizeof(int) * valueCount);
            for (std::map<LLBC_String, LLBC_Variant>::const_iterator valueIt = values.begin();
                 valueIt != values.end();
                 valueIt++)
            {
                char *&nativeKey = nativeSection->keys[valueIdx];
                int &nativeKeyLen = nativeSection->keysLen[valueIdx];

                char *&nativeValue = nativeSection->values[valueIdx];
                int &nativeValueLen = nativeSection->valuesLen[valueIdx];

                valueIdx++;

                const LLBC_String &key = valueIt->first;
                nativeKey = csllbc_PInvokeUtil::BuildCSharpStr(key, &nativeKeyLen);
                const LLBC_Variant &value = valueIt->second;
                nativeValue = csllbc_PInvokeUtil::BuildCSharpStr(value, &nativeValueLen);
            }
        }

        return nativeSections;
    }
}

LLBC_BEGIN_C_DECL

csllbc_Ini_IniSection *csllbc_Ini_LoadFromContent(const char *content, int *sectionCount, int *errDescLen)
{
    LLBC_Ini *ini = LLBC_New(LLBC_Ini);
    if (ini->LoadFromContent(content) != LLBC_OK)
    {
        LLBC_String errStr = LLBC_String().format(
            "load ini failed, error: %s, detail information: %s",
            LLBC_FormatLastError(), ini->GetLoadError().c_str());

        *sectionCount = -1;
        return reinterpret_cast<csllbc_Ini_IniSection *>(csllbc_PInvokeUtil::BuildCSharpStr(errStr, errDescLen));
    }

    csllbc_Ini_IniSection *sections = _GetAllSections(ini, sectionCount);
    LLBC_Delete(ini);

    return sections;
}

void csllbc_Ini_FreeNativeSections(csllbc_Ini_IniSection *sections, int sectionCount)
{
    if (UNLIKELY(sections == NULL))
        return;

    for (int sectionIdx = 0; sectionIdx < sectionCount; sectionIdx++)
    {
        csllbc_Ini_IniSection &section = sections[sectionIdx];
        LLBC_Free(section.sectionName);

        int valueCount = section.count;
        for (int valueIdx = 0; valueIdx < valueCount; valueIdx++)
        {
            LLBC_Free(section.keys[valueIdx]);
            LLBC_XFree(section.values[valueIdx]);
        }

        if (valueCount > 0)
        {
            LLBC_Free(section.keys);
            LLBC_Free(section.keysLen);

            LLBC_Free(section.values);
            LLBC_Free(section.valuesLen);
        }
    }

    LLBC_Free(sections);
}

LLBC_END_C_DECL