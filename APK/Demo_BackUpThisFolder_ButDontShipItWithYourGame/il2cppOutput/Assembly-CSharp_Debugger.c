#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[13] = 
{
	{ 5713, 0,  1 } /*tableIndex: 0 */,
	{ 10395, 1,  2 } /*tableIndex: 1 */,
	{ 9187, 2,  3 } /*tableIndex: 2 */,
	{ 10435, 3,  3 } /*tableIndex: 3 */,
	{ 5777, 4,  3 } /*tableIndex: 4 */,
	{ 5713, 0,  3 } /*tableIndex: 5 */,
	{ 8158, 5,  5 } /*tableIndex: 6 */,
	{ 10818, 6,  5 } /*tableIndex: 7 */,
	{ 10818, 7,  5 } /*tableIndex: 8 */,
	{ 9760, 8,  5 } /*tableIndex: 9 */,
	{ 8158, 9,  6 } /*tableIndex: 10 */,
	{ 9760, 10,  7 } /*tableIndex: 11 */,
	{ 9760, 11,  7 } /*tableIndex: 12 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[12] = 
{
	"anchor",
	"touch",
	"hitPose",
	"hitTrackableId",
	"hitPlane",
	"vertexCount",
	"centerInPlaneSpace",
	"uv",
	"shortestUVMapping",
	"i",
	"vertexDist",
	"uvMapping",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[16] = 
{
	{ 0, 0 } /* 0x06000001 UnityEngine.GameObject AnchorCreator::get_AnchorPrefab() */,
	{ 0, 0 } /* 0x06000002 System.Void AnchorCreator::set_AnchorPrefab(UnityEngine.GameObject) */,
	{ 0, 1 } /* 0x06000003 System.Void AnchorCreator::RemoveAllAnchors() */,
	{ 0, 0 } /* 0x06000004 System.Void AnchorCreator::Awake() */,
	{ 1, 5 } /* 0x06000005 System.Void AnchorCreator::Update() */,
	{ 0, 0 } /* 0x06000006 System.Void AnchorCreator::.ctor() */,
	{ 0, 0 } /* 0x06000007 System.Void AnchorCreator::.cctor() */,
	{ 0, 0 } /* 0x06000008 System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth() */,
	{ 0, 0 } /* 0x06000009 System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single) */,
	{ 0, 0 } /* 0x0600000A System.Void ARFeatheredPlaneMeshVisualizer::Awake() */,
	{ 0, 0 } /* 0x0600000B System.Void ARFeatheredPlaneMeshVisualizer::OnEnable() */,
	{ 0, 0 } /* 0x0600000C System.Void ARFeatheredPlaneMeshVisualizer::OnDisable() */,
	{ 0, 0 } /* 0x0600000D System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs) */,
	{ 6, 7 } /* 0x0600000E System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh) */,
	{ 0, 0 } /* 0x0600000F System.Void ARFeatheredPlaneMeshVisualizer::.ctor() */,
	{ 0, 0 } /* 0x06000010 System.Void ARFeatheredPlaneMeshVisualizer::.cctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[];
Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[193] = 
{
	{ 31434, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 31434, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 31434, 1, 23, 23, 16, 30, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 31435, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 31435, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 31435, 1, 24, 24, 16, 38, 0, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 31436, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 31436, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 31436, 1, 29, 29, 5, 6, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 31436, 1, 30, 30, 9, 16, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 31436, 1, 30, 30, 32, 46, 2, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 31436, 1, 30, 30, 32, 46, 8, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 31436, 1, 30, 30, 0, 0, 14, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 31436, 1, 30, 30, 18, 28, 16, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 31436, 1, 30, 30, 18, 28, 18, kSequencePointKind_StepOut, 0, 14 } /* seqPointIndex: 14 */,
	{ 31436, 1, 31, 31, 9, 10, 24, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 31436, 1, 32, 32, 13, 29, 25, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 31436, 1, 32, 32, 13, 29, 26, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 31436, 1, 33, 33, 9, 10, 32, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 31436, 1, 30, 30, 29, 31, 33, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 31436, 1, 30, 30, 29, 31, 35, kSequencePointKind_StepOut, 0, 20 } /* seqPointIndex: 20 */,
	{ 31436, 1, 30, 30, 0, 0, 44, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 31436, 1, 30, 30, 0, 0, 52, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 31436, 1, 34, 34, 9, 32, 59, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 31436, 1, 34, 34, 9, 32, 65, kSequencePointKind_StepOut, 0, 24 } /* seqPointIndex: 24 */,
	{ 31436, 1, 35, 35, 5, 6, 71, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 31437, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 31437, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 31437, 1, 42, 42, 5, 6, 0, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 31437, 1, 43, 43, 9, 61, 1, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 31437, 1, 43, 43, 9, 61, 3, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 31437, 1, 44, 44, 9, 59, 13, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 31437, 1, 44, 44, 9, 59, 15, kSequencePointKind_StepOut, 0, 32 } /* seqPointIndex: 32 */,
	{ 31437, 1, 45, 45, 9, 57, 25, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 31437, 1, 45, 45, 9, 57, 27, kSequencePointKind_StepOut, 0, 34 } /* seqPointIndex: 34 */,
	{ 31437, 1, 46, 46, 9, 47, 37, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 31437, 1, 46, 46, 9, 47, 38, kSequencePointKind_StepOut, 0, 36 } /* seqPointIndex: 36 */,
	{ 31437, 1, 47, 47, 5, 6, 48, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 31438, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 31438, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 31438, 1, 50, 50, 5, 6, 0, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 31438, 1, 52, 52, 9, 35, 1, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 31438, 1, 52, 52, 9, 35, 1, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 31438, 1, 52, 52, 0, 0, 10, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 31438, 1, 53, 53, 13, 20, 13, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 31438, 1, 55, 55, 9, 39, 18, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 31438, 1, 55, 55, 9, 39, 19, kSequencePointKind_StepOut, 0, 46 } /* seqPointIndex: 46 */,
	{ 31438, 1, 56, 56, 9, 45, 25, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 31438, 1, 56, 56, 9, 45, 27, kSequencePointKind_StepOut, 0, 48 } /* seqPointIndex: 48 */,
	{ 31438, 1, 56, 56, 0, 0, 36, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 31438, 1, 57, 57, 13, 20, 39, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 31438, 1, 59, 59, 9, 96, 44, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 31438, 1, 59, 59, 9, 96, 52, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 31438, 1, 59, 59, 9, 96, 63, kSequencePointKind_StepOut, 0, 53 } /* seqPointIndex: 53 */,
	{ 31438, 1, 59, 59, 0, 0, 69, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 31438, 1, 60, 60, 9, 10, 75, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 31438, 1, 63, 63, 13, 42, 76, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 31438, 1, 63, 63, 13, 42, 82, kSequencePointKind_StepOut, 0, 57 } /* seqPointIndex: 57 */,
	{ 31438, 1, 63, 63, 13, 42, 91, kSequencePointKind_StepOut, 0, 58 } /* seqPointIndex: 58 */,
	{ 31438, 1, 64, 64, 13, 56, 98, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 31438, 1, 64, 64, 13, 56, 104, kSequencePointKind_StepOut, 0, 60 } /* seqPointIndex: 60 */,
	{ 31438, 1, 64, 64, 13, 56, 113, kSequencePointKind_StepOut, 0, 61 } /* seqPointIndex: 61 */,
	{ 31438, 1, 65, 65, 13, 68, 120, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 31438, 1, 65, 65, 13, 68, 128, kSequencePointKind_StepOut, 0, 63 } /* seqPointIndex: 63 */,
	{ 31438, 1, 71, 71, 13, 74, 135, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 31438, 1, 71, 71, 13, 74, 145, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 31438, 1, 72, 72, 13, 59, 152, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 31438, 1, 72, 72, 13, 59, 160, kSequencePointKind_StepOut, 0, 67 } /* seqPointIndex: 67 */,
	{ 31438, 1, 72, 72, 13, 59, 165, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 31438, 1, 74, 74, 13, 32, 171, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 31438, 1, 74, 74, 13, 32, 174, kSequencePointKind_StepOut, 0, 70 } /* seqPointIndex: 70 */,
	{ 31438, 1, 74, 74, 0, 0, 181, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 31438, 1, 75, 75, 13, 14, 185, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 31438, 1, 76, 76, 17, 53, 186, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 31438, 1, 76, 76, 17, 53, 191, kSequencePointKind_StepOut, 0, 74 } /* seqPointIndex: 74 */,
	{ 31438, 1, 77, 77, 13, 14, 197, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 31438, 1, 77, 77, 0, 0, 198, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 31438, 1, 79, 79, 13, 14, 200, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 31438, 1, 81, 81, 17, 44, 201, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 31438, 1, 81, 81, 17, 44, 209, kSequencePointKind_StepOut, 0, 79 } /* seqPointIndex: 79 */,
	{ 31438, 1, 82, 82, 13, 14, 215, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 31438, 1, 83, 83, 9, 10, 216, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 31438, 1, 84, 84, 5, 6, 217, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 31440, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 31440, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 31440, 1, 86, 86, 5, 65, 0, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 31440, 1, 86, 86, 5, 65, 0, kSequencePointKind_StepOut, 0, 86 } /* seqPointIndex: 86 */,
	{ 31441, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 31441, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 31441, 2, 22, 22, 13, 14, 0, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 31441, 2, 22, 22, 15, 40, 1, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 31441, 2, 22, 22, 41, 42, 10, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 31442, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 31442, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 31442, 2, 23, 23, 13, 14, 0, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 31442, 2, 23, 23, 15, 41, 1, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 31442, 2, 23, 23, 42, 43, 8, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 31443, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 31443, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 31443, 2, 27, 27, 5, 6, 0, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 31443, 2, 28, 28, 9, 71, 1, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 31443, 2, 28, 28, 9, 71, 3, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 31443, 2, 29, 29, 9, 74, 13, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 31443, 2, 29, 29, 9, 74, 15, kSequencePointKind_StepOut, 0, 103 } /* seqPointIndex: 103 */,
	{ 31443, 2, 29, 29, 9, 74, 20, kSequencePointKind_StepOut, 0, 104 } /* seqPointIndex: 104 */,
	{ 31443, 2, 30, 30, 9, 43, 30, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 31443, 2, 30, 30, 9, 43, 32, kSequencePointKind_StepOut, 0, 106 } /* seqPointIndex: 106 */,
	{ 31443, 2, 31, 31, 5, 6, 42, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 31444, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 31444, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 31444, 2, 34, 34, 5, 6, 0, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 31444, 2, 35, 35, 9, 60, 1, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 31444, 2, 35, 35, 9, 60, 14, kSequencePointKind_StepOut, 0, 112 } /* seqPointIndex: 112 */,
	{ 31444, 2, 35, 35, 9, 60, 19, kSequencePointKind_StepOut, 0, 113 } /* seqPointIndex: 113 */,
	{ 31444, 2, 36, 36, 5, 6, 25, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 31445, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 31445, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 31445, 2, 39, 39, 5, 6, 0, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 31445, 2, 40, 40, 9, 60, 1, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 31445, 2, 40, 40, 9, 60, 14, kSequencePointKind_StepOut, 0, 119 } /* seqPointIndex: 119 */,
	{ 31445, 2, 40, 40, 9, 60, 19, kSequencePointKind_StepOut, 0, 120 } /* seqPointIndex: 120 */,
	{ 31445, 2, 41, 41, 5, 6, 25, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 31446, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 31446, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 31446, 2, 44, 44, 5, 6, 0, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 31446, 2, 45, 45, 9, 57, 1, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 31446, 2, 45, 45, 9, 57, 8, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 31446, 2, 45, 45, 9, 57, 13, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 31446, 2, 46, 46, 5, 6, 19, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 31447, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 31447, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 31447, 2, 59, 59, 5, 6, 0, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 31447, 2, 60, 60, 9, 44, 1, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 31447, 2, 60, 60, 9, 44, 2, kSequencePointKind_StepOut, 0, 133 } /* seqPointIndex: 133 */,
	{ 31447, 2, 63, 63, 9, 33, 8, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 31447, 2, 63, 63, 9, 33, 13, kSequencePointKind_StepOut, 0, 135 } /* seqPointIndex: 135 */,
	{ 31447, 2, 64, 64, 9, 52, 19, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 31447, 2, 64, 64, 9, 52, 24, kSequencePointKind_StepOut, 0, 137 } /* seqPointIndex: 137 */,
	{ 31447, 2, 64, 64, 0, 0, 34, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 31447, 2, 64, 64, 53, 54, 38, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 31447, 2, 64, 64, 55, 94, 39, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 31447, 2, 64, 64, 55, 94, 45, kSequencePointKind_StepOut, 0, 141 } /* seqPointIndex: 141 */,
	{ 31447, 2, 64, 64, 95, 96, 51, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 31447, 2, 66, 66, 9, 38, 52, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 31447, 2, 66, 66, 9, 38, 58, kSequencePointKind_StepOut, 0, 144 } /* seqPointIndex: 144 */,
	{ 31447, 2, 68, 68, 9, 71, 64, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 31447, 2, 68, 68, 9, 71, 74, kSequencePointKind_StepOut, 0, 146 } /* seqPointIndex: 146 */,
	{ 31447, 2, 68, 68, 9, 71, 81, kSequencePointKind_StepOut, 0, 147 } /* seqPointIndex: 147 */,
	{ 31447, 2, 69, 69, 9, 43, 87, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 31447, 2, 69, 69, 9, 43, 104, kSequencePointKind_StepOut, 0, 149 } /* seqPointIndex: 149 */,
	{ 31447, 2, 70, 70, 9, 50, 109, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 31447, 2, 73, 73, 14, 23, 115, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 31447, 2, 73, 73, 0, 0, 118, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 31447, 2, 74, 74, 9, 10, 120, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 31447, 2, 75, 75, 13, 84, 121, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 31447, 2, 75, 75, 13, 84, 128, kSequencePointKind_StepOut, 0, 155 } /* seqPointIndex: 155 */,
	{ 31447, 2, 75, 75, 13, 84, 134, kSequencePointKind_StepOut, 0, 156 } /* seqPointIndex: 156 */,
	{ 31447, 2, 80, 80, 13, 92, 141, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 31447, 2, 80, 80, 13, 92, 146, kSequencePointKind_StepOut, 0, 158 } /* seqPointIndex: 158 */,
	{ 31447, 2, 80, 80, 13, 92, 157, kSequencePointKind_StepOut, 0, 159 } /* seqPointIndex: 159 */,
	{ 31447, 2, 81, 81, 13, 30, 165, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 31447, 2, 86, 86, 13, 47, 174, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 31447, 2, 86, 86, 0, 0, 181, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 31447, 2, 86, 86, 48, 49, 185, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 31447, 2, 86, 86, 50, 80, 186, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 31447, 2, 86, 86, 81, 82, 189, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 31447, 2, 88, 88, 13, 37, 190, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 31447, 2, 88, 88, 13, 37, 196, kSequencePointKind_StepOut, 0, 167 } /* seqPointIndex: 167 */,
	{ 31447, 2, 89, 89, 9, 10, 202, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 31447, 2, 73, 73, 46, 49, 203, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 31447, 2, 73, 73, 25, 44, 209, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 31447, 2, 73, 73, 0, 0, 218, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 31447, 2, 91, 91, 9, 84, 222, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 31447, 2, 91, 91, 9, 84, 234, kSequencePointKind_StepOut, 0, 173 } /* seqPointIndex: 173 */,
	{ 31447, 2, 94, 94, 9, 25, 240, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 31447, 2, 94, 94, 9, 25, 257, kSequencePointKind_StepOut, 0, 175 } /* seqPointIndex: 175 */,
	{ 31447, 2, 95, 95, 9, 33, 263, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 31447, 2, 95, 95, 9, 33, 269, kSequencePointKind_StepOut, 0, 177 } /* seqPointIndex: 177 */,
	{ 31447, 2, 97, 97, 9, 41, 275, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 31447, 2, 97, 97, 9, 41, 282, kSequencePointKind_StepOut, 0, 179 } /* seqPointIndex: 179 */,
	{ 31447, 2, 98, 98, 9, 36, 288, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 31447, 2, 98, 98, 9, 36, 290, kSequencePointKind_StepOut, 0, 181 } /* seqPointIndex: 181 */,
	{ 31447, 2, 99, 99, 5, 6, 296, kSequencePointKind_Normal, 0, 182 } /* seqPointIndex: 182 */,
	{ 31448, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
	{ 31448, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 184 } /* seqPointIndex: 184 */,
	{ 31448, 2, 15, 15, 5, 36, 0, kSequencePointKind_Normal, 0, 185 } /* seqPointIndex: 185 */,
	{ 31448, 2, 15, 15, 5, 36, 12, kSequencePointKind_StepOut, 0, 186 } /* seqPointIndex: 186 */,
	{ 31449, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 187 } /* seqPointIndex: 187 */,
	{ 31449, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 188 } /* seqPointIndex: 188 */,
	{ 31449, 2, 101, 101, 5, 64, 0, kSequencePointKind_Normal, 0, 189 } /* seqPointIndex: 189 */,
	{ 31449, 2, 101, 101, 5, 64, 0, kSequencePointKind_StepOut, 0, 190 } /* seqPointIndex: 190 */,
	{ 31449, 2, 103, 103, 5, 59, 10, kSequencePointKind_Normal, 0, 191 } /* seqPointIndex: 191 */,
	{ 31449, 2, 103, 103, 5, 59, 10, kSequencePointKind_StepOut, 0, 192 } /* seqPointIndex: 192 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[];
Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "D:\\P2-Remesy_Theo\\UnityProject\\ARSheep\\Assets\\ExampleAssets\\Scripts\\AnchorCreator.cs", { 214, 172, 61, 103, 253, 35, 115, 36, 112, 33, 179, 196, 160, 52, 33, 161} }, //1 
{ "D:\\P2-Remesy_Theo\\UnityProject\\ARSheep\\Assets\\ExampleAssets\\Scripts\\ARFeatheredPlaneMeshVisualizer.cs", { 117, 189, 172, 170, 49, 199, 116, 182, 76, 67, 127, 210, 116, 43, 164, 152} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[2] = 
{
	{ 4520, 1 },
	{ 4521, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[8] = 
{
	{ 0, 72 },
	{ 16, 33 },
	{ 0, 218 },
	{ 75, 217 },
	{ 0, 12 },
	{ 0, 297 },
	{ 115, 222 },
	{ 120, 203 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[16] = 
{
	{ 0, 0, 0 } /* UnityEngine.GameObject AnchorCreator::get_AnchorPrefab() */,
	{ 0, 0, 0 } /* System.Void AnchorCreator::set_AnchorPrefab(UnityEngine.GameObject) */,
	{ 72, 0, 2 } /* System.Void AnchorCreator::RemoveAllAnchors() */,
	{ 0, 0, 0 } /* System.Void AnchorCreator::Awake() */,
	{ 218, 2, 2 } /* System.Void AnchorCreator::Update() */,
	{ 0, 0, 0 } /* System.Void AnchorCreator::.ctor() */,
	{ 0, 0, 0 } /* System.Void AnchorCreator::.cctor() */,
	{ 12, 4, 1 } /* System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth() */,
	{ 0, 0, 0 } /* System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single) */,
	{ 0, 0, 0 } /* System.Void ARFeatheredPlaneMeshVisualizer::Awake() */,
	{ 0, 0, 0 } /* System.Void ARFeatheredPlaneMeshVisualizer::OnEnable() */,
	{ 0, 0, 0 } /* System.Void ARFeatheredPlaneMeshVisualizer::OnDisable() */,
	{ 0, 0, 0 } /* System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs) */,
	{ 297, 5, 3 } /* System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh) */,
	{ 0, 0, 0 } /* System.Void ARFeatheredPlaneMeshVisualizer::.ctor() */,
	{ 0, 0, 0 } /* System.Void ARFeatheredPlaneMeshVisualizer::.cctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationAssemblyU2DCSharp;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationAssemblyU2DCSharp = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	193,
	(Il2CppSequencePoint*)g_sequencePointsAssemblyU2DCSharp,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	2,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
