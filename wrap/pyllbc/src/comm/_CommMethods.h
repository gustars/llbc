/**
 *@file		_CommMethods.h
 *@author	Longwei Lai<lailongwei@126.com>
 *@date		<auto generate code, not tag date>
 *@version	1.0
 *
 *@brief	Auto generate by script tools, do not modify this file!!
 *@doc	
 */

#ifndef __PYLLBC_AUTOGEN_COMM__COMMMETHODS_H__
#define __PYLLBC_AUTOGEN_COMM__COMMMETHODS_H__

#include "pyllbc/common/LibHeader.h"
#include "pyllbc/common/Macro.h"
#include "src/comm/_Codec.h"
#include "src/comm/_ObjCoder.h"
#include "src/comm/_Protocol.h"
#include "src/comm/_Service.h"
#include "src/comm/_Timer.h"

class pyllbc_CommMethods
{
public:
    pyllbc_CommMethods()
    {
        RegisterFacade.ml_name = "RegisterFacade";
        RegisterFacade.ml_meth = (PyCFunction)_pyllbc_RegisterFacade;
        RegisterFacade.ml_flags = METH_VARARGS;
        RegisterFacade.ml_doc = "pyllbc library method/function";
        DelService.ml_name = "DelService";
        DelService.ml_meth = (PyCFunction)_pyllbc_DelService;
        DelService.ml_flags = METH_VARARGS;
        DelService.ml_doc = "pyllbc library method/function";
        PyTimerGetTimerId.ml_name = "PyTimerGetTimerId";
        PyTimerGetTimerId.ml_meth = (PyCFunction)_pyllbc_PyTimerGetTimerId;
        PyTimerGetTimerId.ml_flags = METH_VARARGS;
        PyTimerGetTimerId.ml_doc = "pyllbc library method/function";
        GetServiceTypeStr.ml_name = "GetServiceTypeStr";
        GetServiceTypeStr.ml_meth = (PyCFunction)_pyllbc_GetServiceTypeStr;
        GetServiceTypeStr.ml_flags = METH_VARARGS;
        GetServiceTypeStr.ml_doc = "pyllbc library method/function";
        PyTimerIsTimeouting.ml_name = "PyTimerIsTimeouting";
        PyTimerIsTimeouting.ml_meth = (PyCFunction)_pyllbc_PyTimerIsTimeouting;
        PyTimerIsTimeouting.ml_flags = METH_VARARGS;
        PyTimerIsTimeouting.ml_doc = "pyllbc library method/function";
        StopService.ml_name = "StopService";
        StopService.ml_meth = (PyCFunction)_pyllbc_StopService;
        StopService.ml_flags = METH_VARARGS;
        StopService.ml_doc = "pyllbc library method/function";
        RemoveSession.ml_name = "RemoveSession";
        RemoveSession.ml_meth = (PyCFunction)_pyllbc_RemoveSession;
        RemoveSession.ml_flags = METH_VARARGS;
        RemoveSession.ml_doc = "pyllbc library method/function";
        PyTimerCancel.ml_name = "PyTimerCancel";
        PyTimerCancel.ml_meth = (PyCFunction)_pyllbc_PyTimerCancel;
        PyTimerCancel.ml_flags = METH_VARARGS;
        PyTimerCancel.ml_doc = "pyllbc library method/function";
        o2j.ml_name = "o2j";
        o2j.ml_meth = (PyCFunction)_pyllbc_o2j;
        o2j.ml_flags = METH_VARARGS;
        o2j.ml_doc = "pyllbc library method/function";
        SetServiceCodec.ml_name = "SetServiceCodec";
        SetServiceCodec.ml_meth = (PyCFunction)_pyllbc_SetServiceCodec;
        SetServiceCodec.ml_flags = METH_VARARGS;
        SetServiceCodec.ml_doc = "pyllbc library method/function";
        GetServiceId.ml_name = "GetServiceId";
        GetServiceId.ml_meth = (PyCFunction)_pyllbc_GetServiceId;
        GetServiceId.ml_flags = METH_VARARGS;
        GetServiceId.ml_doc = "pyllbc library method/function";
        Listen.ml_name = "Listen";
        Listen.ml_meth = (PyCFunction)_pyllbc_Listen;
        Listen.ml_flags = METH_VARARGS;
        Listen.ml_doc = "pyllbc library method/function";
        level2str.ml_name = "level2str";
        level2str.ml_meth = (PyCFunction)_pyllbc_level2str;
        level2str.ml_flags = METH_VARARGS;
        level2str.ml_doc = "pyllbc library method/function";
        SetServiceFPS.ml_name = "SetServiceFPS";
        SetServiceFPS.ml_meth = (PyCFunction)_pyllbc_SetServiceFPS;
        SetServiceFPS.ml_flags = METH_VARARGS;
        SetServiceFPS.ml_doc = "pyllbc library method/function";
        PyTimerGetPeriod.ml_name = "PyTimerGetPeriod";
        PyTimerGetPeriod.ml_meth = (PyCFunction)_pyllbc_PyTimerGetPeriod;
        PyTimerGetPeriod.ml_flags = METH_VARARGS;
        PyTimerGetPeriod.ml_doc = "pyllbc library method/function";
        ClearHookedErrors.ml_name = "ClearHookedErrors";
        ClearHookedErrors.ml_meth = (PyCFunction)_pyllbc_ClearHookedErrors;
        ClearHookedErrors.ml_flags = METH_VARARGS;
        ClearHookedErrors.ml_doc = "pyllbc library method/function";
        DelPyTimer.ml_name = "DelPyTimer";
        DelPyTimer.ml_meth = (PyCFunction)_pyllbc_DelPyTimer;
        DelPyTimer.ml_flags = METH_VARARGS;
        DelPyTimer.ml_doc = "pyllbc library method/function";
        InstallErrHooker.ml_name = "InstallErrHooker";
        InstallErrHooker.ml_meth = (PyCFunction)_pyllbc_InstallErrHooker;
        InstallErrHooker.ml_flags = METH_VARARGS;
        InstallErrHooker.ml_doc = "pyllbc library method/function";
        decode.ml_name = "decode";
        decode.ml_meth = (PyCFunction)_pyllbc_decode;
        decode.ml_flags = METH_VARARGS;
        decode.ml_doc = "pyllbc library method/function";
        encode.ml_name = "encode";
        encode.ml_meth = (PyCFunction)_pyllbc_encode;
        encode.ml_flags = METH_VARARGS;
        encode.ml_doc = "pyllbc library method/function";
        PreSubscribe.ml_name = "PreSubscribe";
        PreSubscribe.ml_meth = (PyCFunction)_pyllbc_PreSubscribe;
        PreSubscribe.ml_flags = METH_VARARGS;
        PreSubscribe.ml_doc = "pyllbc library method/function";
        Post.ml_name = "Post";
        Post.ml_meth = (PyCFunction)_pyllbc_Post;
        Post.ml_flags = METH_VARARGS;
        Post.ml_doc = "pyllbc library method/function";
        PyTimerSetIgnoredDeadRef.ml_name = "PyTimerSetIgnoredDeadRef";
        PyTimerSetIgnoredDeadRef.ml_meth = (PyCFunction)_pyllbc_PyTimerSetIgnoredDeadRef;
        PyTimerSetIgnoredDeadRef.ml_flags = METH_VARARGS;
        PyTimerSetIgnoredDeadRef.ml_doc = "pyllbc library method/function";
        UninstallErrHooker.ml_name = "UninstallErrHooker";
        UninstallErrHooker.ml_meth = (PyCFunction)_pyllbc_UninstallErrHooker;
        UninstallErrHooker.ml_flags = METH_VARARGS;
        UninstallErrHooker.ml_doc = "pyllbc library method/function";
        Connect.ml_name = "Connect";
        Connect.ml_meth = (PyCFunction)_pyllbc_Connect;
        Connect.ml_flags = METH_VARARGS;
        Connect.ml_doc = "pyllbc library method/function";
        PyTimerSchedule.ml_name = "PyTimerSchedule";
        PyTimerSchedule.ml_meth = (PyCFunction)_pyllbc_PyTimerSchedule;
        PyTimerSchedule.ml_flags = METH_VARARGS;
        PyTimerSchedule.ml_doc = "pyllbc library method/function";
        SendData.ml_name = "SendData";
        SendData.ml_meth = (PyCFunction)_pyllbc_SendData;
        SendData.ml_flags = METH_VARARGS;
        SendData.ml_doc = "pyllbc library method/function";
        PyTimerGetDueTime.ml_name = "PyTimerGetDueTime";
        PyTimerGetDueTime.ml_meth = (PyCFunction)_pyllbc_PyTimerGetDueTime;
        PyTimerGetDueTime.ml_flags = METH_VARARGS;
        PyTimerGetDueTime.ml_doc = "pyllbc library method/function";
        j2o.ml_name = "j2o";
        j2o.ml_meth = (PyCFunction)_pyllbc_j2o;
        j2o.ml_flags = METH_VARARGS;
        j2o.ml_doc = "pyllbc library method/function";
        layer2str.ml_name = "layer2str";
        layer2str.ml_meth = (PyCFunction)_pyllbc_layer2str;
        layer2str.ml_flags = METH_VARARGS;
        layer2str.ml_doc = "pyllbc library method/function";
        NewPyTimer.ml_name = "NewPyTimer";
        NewPyTimer.ml_meth = (PyCFunction)_pyllbc_NewPyTimer;
        NewPyTimer.ml_flags = METH_VARARGS;
        NewPyTimer.ml_doc = "pyllbc library method/function";
        GetServiceType.ml_name = "GetServiceType";
        GetServiceType.ml_meth = (PyCFunction)_pyllbc_GetServiceType;
        GetServiceType.ml_flags = METH_VARARGS;
        GetServiceType.ml_doc = "pyllbc library method/function";
        PyTimerIsCancelling.ml_name = "PyTimerIsCancelling";
        PyTimerIsCancelling.ml_meth = (PyCFunction)_pyllbc_PyTimerIsCancelling;
        PyTimerIsCancelling.ml_flags = METH_VARARGS;
        PyTimerIsCancelling.ml_doc = "pyllbc library method/function";
        AsyncConn.ml_name = "AsyncConn";
        AsyncConn.ml_meth = (PyCFunction)_pyllbc_AsyncConn;
        AsyncConn.ml_flags = METH_VARARGS;
        AsyncConn.ml_doc = "pyllbc library method/function";
        StartService.ml_name = "StartService";
        StartService.ml_meth = (PyCFunction)_pyllbc_StartService;
        StartService.ml_flags = METH_VARARGS;
        StartService.ml_doc = "pyllbc library method/function";
        GetServiceFPS.ml_name = "GetServiceFPS";
        GetServiceFPS.ml_meth = (PyCFunction)_pyllbc_GetServiceFPS;
        GetServiceFPS.ml_flags = METH_VARARGS;
        GetServiceFPS.ml_doc = "pyllbc library method/function";
        Broadcast.ml_name = "Broadcast";
        Broadcast.ml_meth = (PyCFunction)_pyllbc_Broadcast;
        Broadcast.ml_flags = METH_VARARGS;
        Broadcast.ml_doc = "pyllbc library method/function";
        PyTimerIsIgnoredDeadRef.ml_name = "PyTimerIsIgnoredDeadRef";
        PyTimerIsIgnoredDeadRef.ml_meth = (PyCFunction)_pyllbc_PyTimerIsIgnoredDeadRef;
        PyTimerIsIgnoredDeadRef.ml_flags = METH_VARARGS;
        PyTimerIsIgnoredDeadRef.ml_doc = "pyllbc library method/function";
        PyTimerIsScheduling.ml_name = "PyTimerIsScheduling";
        PyTimerIsScheduling.ml_meth = (PyCFunction)_pyllbc_PyTimerIsScheduling;
        PyTimerIsScheduling.ml_flags = METH_VARARGS;
        PyTimerIsScheduling.ml_doc = "pyllbc library method/function";
        SuppressServiceCoderNotFoundWarning.ml_name = "SuppressServiceCoderNotFoundWarning";
        SuppressServiceCoderNotFoundWarning.ml_meth = (PyCFunction)_pyllbc_SuppressServiceCoderNotFoundWarning;
        SuppressServiceCoderNotFoundWarning.ml_flags = METH_VARARGS;
        SuppressServiceCoderNotFoundWarning.ml_doc = "pyllbc library method/function";
        PyTimerUpdateAllTimers.ml_name = "PyTimerUpdateAllTimers";
        PyTimerUpdateAllTimers.ml_meth = (PyCFunction)_pyllbc_PyTimerUpdateAllTimers;
        PyTimerUpdateAllTimers.ml_flags = METH_VARARGS;
        PyTimerUpdateAllTimers.ml_doc = "pyllbc library method/function";
        NewService.ml_name = "NewService";
        NewService.ml_meth = (PyCFunction)_pyllbc_NewService;
        NewService.ml_flags = METH_VARARGS;
        NewService.ml_doc = "pyllbc library method/function";
        RegisterCodec.ml_name = "RegisterCodec";
        RegisterCodec.ml_meth = (PyCFunction)_pyllbc_RegisterCodec;
        RegisterCodec.ml_flags = METH_VARARGS;
        RegisterCodec.ml_doc = "pyllbc library method/function";
        GetServiceFrameInterval.ml_name = "GetServiceFrameInterval";
        GetServiceFrameInterval.ml_meth = (PyCFunction)_pyllbc_GetServiceFrameInterval;
        GetServiceFrameInterval.ml_flags = METH_VARARGS;
        GetServiceFrameInterval.ml_doc = "pyllbc library method/function";
        Subscribe.ml_name = "Subscribe";
        Subscribe.ml_meth = (PyCFunction)_pyllbc_Subscribe;
        Subscribe.ml_flags = METH_VARARGS;
        Subscribe.ml_doc = "pyllbc library method/function";
        GetServiceCodec.ml_name = "GetServiceCodec";
        GetServiceCodec.ml_meth = (PyCFunction)_pyllbc_GetServiceCodec;
        GetServiceCodec.ml_flags = METH_VARARGS;
        GetServiceCodec.ml_doc = "pyllbc library method/function";
        Multicast.ml_name = "Multicast";
        Multicast.ml_meth = (PyCFunction)_pyllbc_Multicast;
        Multicast.ml_flags = METH_VARARGS;
        Multicast.ml_doc = "pyllbc library method/function";
        UnifyPreSubscribe.ml_name = "UnifyPreSubscribe";
        UnifyPreSubscribe.ml_meth = (PyCFunction)_pyllbc_UnifyPreSubscribe;
        UnifyPreSubscribe.ml_flags = METH_VARARGS;
        UnifyPreSubscribe.ml_doc = "pyllbc library method/function";
        ServiceMainLoop.ml_name = "ServiceMainLoop";
        ServiceMainLoop.ml_meth = (PyCFunction)_pyllbc_ServiceMainLoop;
        ServiceMainLoop.ml_flags = METH_VARARGS;
        ServiceMainLoop.ml_doc = "pyllbc library method/function";
    }

public:
    ::PyMethodDef RegisterFacade;
    ::PyMethodDef DelService;
    ::PyMethodDef PyTimerGetTimerId;
    ::PyMethodDef GetServiceTypeStr;
    ::PyMethodDef PyTimerIsTimeouting;
    ::PyMethodDef StopService;
    ::PyMethodDef RemoveSession;
    ::PyMethodDef PyTimerCancel;
    ::PyMethodDef o2j;
    ::PyMethodDef SetServiceCodec;
    ::PyMethodDef GetServiceId;
    ::PyMethodDef Listen;
    ::PyMethodDef level2str;
    ::PyMethodDef SetServiceFPS;
    ::PyMethodDef PyTimerGetPeriod;
    ::PyMethodDef ClearHookedErrors;
    ::PyMethodDef DelPyTimer;
    ::PyMethodDef InstallErrHooker;
    ::PyMethodDef decode;
    ::PyMethodDef encode;
    ::PyMethodDef PreSubscribe;
    ::PyMethodDef Post;
    ::PyMethodDef PyTimerSetIgnoredDeadRef;
    ::PyMethodDef UninstallErrHooker;
    ::PyMethodDef Connect;
    ::PyMethodDef PyTimerSchedule;
    ::PyMethodDef SendData;
    ::PyMethodDef PyTimerGetDueTime;
    ::PyMethodDef j2o;
    ::PyMethodDef layer2str;
    ::PyMethodDef NewPyTimer;
    ::PyMethodDef GetServiceType;
    ::PyMethodDef PyTimerIsCancelling;
    ::PyMethodDef AsyncConn;
    ::PyMethodDef StartService;
    ::PyMethodDef GetServiceFPS;
    ::PyMethodDef Broadcast;
    ::PyMethodDef PyTimerIsIgnoredDeadRef;
    ::PyMethodDef PyTimerIsScheduling;
    ::PyMethodDef SuppressServiceCoderNotFoundWarning;
    ::PyMethodDef PyTimerUpdateAllTimers;
    ::PyMethodDef NewService;
    ::PyMethodDef RegisterCodec;
    ::PyMethodDef GetServiceFrameInterval;
    ::PyMethodDef Subscribe;
    ::PyMethodDef GetServiceCodec;
    ::PyMethodDef Multicast;
    ::PyMethodDef UnifyPreSubscribe;
    ::PyMethodDef ServiceMainLoop;
};

#define pyllbc_s_CommMethods LLBC_Singleton< ::pyllbc_CommMethods, LLBC_DummyLock>::Instance()

#endif // !__PYLLBC_AUTOGEN_COMM__COMMMETHODS_H__

