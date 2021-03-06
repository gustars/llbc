// The MIT License (MIT)

// Copyright (c) 2013 lailongwei<lailongwei@126.com>
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy of 
// this software and associated documentation files (the "Software"), to deal in 
// the Software without restriction, including without limitation the rights to 
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of 
// the Software, and to permit persons to whom the Software is furnished to do so, 
// subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all 
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS 
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER 
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN 
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#ifndef __LLBC_COM_BEFORE_INCL_H__
#define __LLBC_COM_BEFORE_INCL_H__

#include "llbc/common/PFConfig.h"
#include "llbc/common/Compiler.h"

// WIN32 platform MSVC compiler specific: push old warning settings, and set library warning settings.
#if LLBC_CUR_COMP == LLBC_COMP_MSVC
#pragma warning(push, 3) // push project warning settings, and set library warning level to 3.
#pragma warning(disable: 4251) // disable the 4251 warning, we ignore it, about C4251, see MSDN.
#endif // LLBC_COMP_MSVC

#endif // !__LLBC_COM_BEFORE_INCL_H__
