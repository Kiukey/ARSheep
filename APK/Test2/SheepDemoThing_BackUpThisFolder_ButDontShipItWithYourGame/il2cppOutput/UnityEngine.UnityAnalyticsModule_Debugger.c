﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[7] = 
{
	{ 12445, 0,  0 } /*tableIndex: 0 */,
	{ 5845, 0,  1 } /*tableIndex: 1 */,
	{ 1309, 0,  2 } /*tableIndex: 2 */,
	{ 1183, 0,  3 } /*tableIndex: 3 */,
	{ 11372, 0,  4 } /*tableIndex: 4 */,
	{ 11370, 0,  5 } /*tableIndex: 5 */,
	{ 9927, 1,  6 } /*tableIndex: 6 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"handler",
	"n",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[18] = 
{
	{ 0, 1 } /* 0x06000001 System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean) */,
	{ 1, 1 } /* 0x06000002 System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer() */,
	{ 2, 1 } /* 0x06000003 System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32) */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke() */,
	{ 3, 1 } /* 0x06000006 System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean) */,
	{ 4, 1 } /* 0x06000007 System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 5, 1 } /* 0x06000008 System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String) */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String) */,
	{ 0, 0 } /* 0x0600000D System.Boolean UnityEngine.Analytics.Analytics::IsInitialized() */,
	{ 0, 0 } /* 0x0600000E UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean) */,
	{ 0, 0 } /* 0x0600000F UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String) */,
	{ 6, 1 } /* 0x06000010 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.String) */,
	{ 0, 0 } /* 0x06000011 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String) */,
	{ 0, 0 } /* 0x06000012 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEvent(System.String,System.Object,System.Int32,System.String) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[98] = 
{
	{ 31300, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 31300, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 31300, 1, 25, 25, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 31300, 1, 26, 26, 13, 35, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 31300, 1, 27, 27, 13, 33, 7, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 31300, 1, 27, 27, 0, 0, 12, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 31300, 1, 28, 28, 17, 27, 15, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 31300, 1, 28, 28, 17, 27, 16, kSequencePointKind_StepOut, 0, 7 } /* seqPointIndex: 7 */,
	{ 31300, 1, 29, 29, 9, 10, 22, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 31301, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 31301, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 31301, 1, 33, 33, 9, 10, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 31301, 1, 34, 34, 13, 49, 1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 31301, 1, 35, 35, 13, 33, 7, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 31301, 1, 35, 35, 0, 0, 12, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 31301, 1, 36, 36, 17, 27, 15, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 31301, 1, 36, 36, 17, 27, 16, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 31301, 1, 37, 37, 9, 10, 22, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 31302, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 31302, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 31302, 1, 41, 41, 9, 10, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 31302, 1, 42, 42, 13, 37, 1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 31302, 1, 43, 43, 13, 33, 7, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 31302, 1, 43, 43, 0, 0, 12, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 31302, 1, 44, 44, 17, 78, 15, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 31302, 1, 44, 44, 17, 78, 19, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 31302, 1, 45, 45, 9, 10, 25, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 31305, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 31305, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 31305, 1, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 31305, 1, 178, 178, 13, 39, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 31305, 1, 179, 179, 13, 33, 8, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 31305, 1, 179, 179, 0, 0, 13, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 31305, 1, 180, 180, 17, 51, 16, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 31305, 1, 180, 180, 17, 51, 18, kSequencePointKind_StepOut, 0, 34 } /* seqPointIndex: 34 */,
	{ 31305, 1, 181, 181, 9, 10, 24, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 31306, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 31306, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 31306, 2, 26, 26, 9, 10, 0, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 31306, 2, 27, 27, 13, 47, 1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 31306, 2, 28, 28, 13, 33, 7, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 31306, 2, 28, 28, 0, 0, 12, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 31306, 2, 29, 29, 17, 86, 15, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 31306, 2, 29, 29, 17, 86, 20, kSequencePointKind_StepOut, 0, 43 } /* seqPointIndex: 43 */,
	{ 31306, 2, 30, 30, 9, 10, 26, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 31307, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 31307, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 31307, 2, 104, 104, 9, 10, 0, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 31307, 2, 105, 105, 13, 48, 1, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 31307, 2, 106, 106, 13, 33, 7, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 31307, 2, 106, 106, 0, 0, 12, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 31307, 2, 107, 107, 17, 32, 15, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 31307, 2, 107, 107, 17, 32, 17, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 31307, 2, 108, 108, 9, 10, 23, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 31315, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 31315, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 31315, 3, 272, 272, 9, 10, 0, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 31315, 3, 273, 273, 13, 37, 1, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 31315, 3, 274, 274, 13, 56, 7, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 31315, 3, 274, 274, 13, 56, 7, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 31315, 3, 274, 274, 13, 56, 12, kSequencePointKind_StepOut, 0, 60 } /* seqPointIndex: 60 */,
	{ 31315, 3, 275, 275, 13, 97, 18, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 31315, 3, 275, 275, 13, 97, 26, kSequencePointKind_StepOut, 0, 62 } /* seqPointIndex: 62 */,
	{ 31315, 3, 276, 276, 9, 10, 34, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 31316, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 31316, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 31316, 3, 287, 287, 9, 10, 0, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 31316, 3, 288, 288, 13, 49, 1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 31316, 3, 288, 288, 13, 49, 2, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 31316, 3, 288, 288, 0, 0, 8, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 31316, 3, 289, 289, 17, 97, 11, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 31316, 3, 289, 289, 17, 97, 16, kSequencePointKind_StepOut, 0, 71 } /* seqPointIndex: 71 */,
	{ 31316, 3, 290, 290, 13, 34, 22, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 31316, 3, 290, 290, 13, 34, 22, kSequencePointKind_StepOut, 0, 73 } /* seqPointIndex: 73 */,
	{ 31316, 3, 290, 290, 0, 0, 31, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 31316, 3, 291, 291, 17, 55, 34, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 31316, 3, 292, 292, 13, 125, 38, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 31316, 3, 292, 292, 13, 125, 49, kSequencePointKind_StepOut, 0, 77 } /* seqPointIndex: 77 */,
	{ 31316, 3, 293, 293, 9, 10, 57, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 31317, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 31317, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 31317, 3, 296, 296, 9, 10, 0, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 31317, 3, 297, 297, 13, 49, 1, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 31317, 3, 297, 297, 13, 49, 2, kSequencePointKind_StepOut, 0, 83 } /* seqPointIndex: 83 */,
	{ 31317, 3, 297, 297, 0, 0, 8, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 31317, 3, 298, 298, 17, 97, 11, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 31317, 3, 298, 298, 17, 97, 16, kSequencePointKind_StepOut, 0, 86 } /* seqPointIndex: 86 */,
	{ 31317, 3, 299, 299, 13, 36, 22, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 31317, 3, 299, 299, 0, 0, 27, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 31317, 3, 300, 300, 17, 78, 30, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 31317, 3, 300, 300, 17, 78, 35, kSequencePointKind_StepOut, 0, 90 } /* seqPointIndex: 90 */,
	{ 31317, 3, 301, 301, 13, 34, 41, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 31317, 3, 301, 301, 13, 34, 41, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 31317, 3, 301, 301, 0, 0, 50, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 31317, 3, 302, 302, 17, 55, 53, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 31317, 3, 303, 303, 13, 75, 57, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 31317, 3, 303, 303, 13, 75, 61, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 31317, 3, 304, 304, 9, 10, 69, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\Users\\bokken\\buildslave\\unity\\build\\Modules\\UnityAnalytics\\RemoteSettings\\RemoteSettings.bindings.cs", { 106, 60, 162, 247, 36, 252, 183, 5, 143, 102, 111, 96, 116, 222, 62, 8} }, //1 
{ "\\Users\\bokken\\buildslave\\unity\\build\\Modules\\UnityAnalytics\\Public\\AnalyticsSessionInfo.bindings.cs", { 159, 171, 218, 211, 43, 69, 52, 219, 243, 244, 170, 90, 38, 135, 126, 190} }, //2 
{ "\\Users\\bokken\\buildslave\\unity\\build\\Modules\\UnityAnalytics\\Public\\UnityAnalytics.cs", { 72, 29, 148, 175, 182, 106, 235, 142, 159, 214, 100, 118, 120, 138, 218, 255} }, //3 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[4] = 
{
	{ 4469, 1 },
	{ 4470, 1 },
	{ 4477, 2 },
	{ 4478, 3 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[9] = 
{
	{ 0, 23 },
	{ 0, 23 },
	{ 0, 26 },
	{ 0, 25 },
	{ 0, 27 },
	{ 0, 24 },
	{ 0, 36 },
	{ 0, 59 },
	{ 0, 71 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[18] = 
{
	{ 23, 0, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean) */,
	{ 23, 1, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer() */,
	{ 26, 2, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke() */,
	{ 25, 3, 1 } /* System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean) */,
	{ 27, 4, 1 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 24, 5, 1 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Analytics.Analytics::IsInitialized() */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String) */,
	{ 36, 6, 1 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.String) */,
	{ 59, 7, 1 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String) */,
	{ 71, 8, 1 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEvent(System.String,System.Object,System.Int32,System.String) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityAnalyticsModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityAnalyticsModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	98,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_UnityAnalyticsModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	4,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};