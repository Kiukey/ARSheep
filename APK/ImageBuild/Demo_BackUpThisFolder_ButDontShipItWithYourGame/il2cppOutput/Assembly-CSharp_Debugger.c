#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[15] = 
{
	{ 5717, 0,  1 } /*tableIndex: 0 */,
	{ 10410, 1,  2 } /*tableIndex: 1 */,
	{ 9202, 2,  3 } /*tableIndex: 2 */,
	{ 10450, 3,  3 } /*tableIndex: 3 */,
	{ 5781, 4,  3 } /*tableIndex: 4 */,
	{ 5717, 0,  3 } /*tableIndex: 5 */,
	{ 8173, 5,  5 } /*tableIndex: 6 */,
	{ 10833, 6,  5 } /*tableIndex: 7 */,
	{ 10833, 7,  5 } /*tableIndex: 8 */,
	{ 9775, 8,  5 } /*tableIndex: 9 */,
	{ 8173, 9,  6 } /*tableIndex: 10 */,
	{ 9775, 10,  7 } /*tableIndex: 11 */,
	{ 9775, 11,  7 } /*tableIndex: 12 */,
	{ 5824, 12,  9 } /*tableIndex: 13 */,
	{ 8173, 9,  10 } /*tableIndex: 14 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[13] = 
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
	"image",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[19] = 
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
	{ 0, 0 } /* 0x06000011 System.Void ImageTracking::Start() */,
	{ 13, 2 } /* 0x06000012 System.Void ImageTracking::UpdateImages(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs) */,
	{ 0, 0 } /* 0x06000013 System.Void ImageTracking::.ctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[];
Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[246] = 
{
	{ 31401, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 31401, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 31401, 1, 23, 23, 16, 30, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 31402, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 31402, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 31402, 1, 24, 24, 16, 38, 0, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 31403, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 31403, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 31403, 1, 29, 29, 5, 6, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 31403, 1, 30, 30, 9, 16, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 31403, 1, 30, 30, 32, 46, 2, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 31403, 1, 30, 30, 32, 46, 8, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 31403, 1, 30, 30, 0, 0, 14, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 31403, 1, 30, 30, 18, 28, 16, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 31403, 1, 30, 30, 18, 28, 18, kSequencePointKind_StepOut, 0, 14 } /* seqPointIndex: 14 */,
	{ 31403, 1, 31, 31, 9, 10, 24, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 31403, 1, 32, 32, 13, 29, 25, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 31403, 1, 32, 32, 13, 29, 26, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 31403, 1, 33, 33, 9, 10, 32, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 31403, 1, 30, 30, 29, 31, 33, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 31403, 1, 30, 30, 29, 31, 35, kSequencePointKind_StepOut, 0, 20 } /* seqPointIndex: 20 */,
	{ 31403, 1, 30, 30, 0, 0, 44, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 31403, 1, 30, 30, 0, 0, 52, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 31403, 1, 34, 34, 9, 32, 59, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 31403, 1, 34, 34, 9, 32, 65, kSequencePointKind_StepOut, 0, 24 } /* seqPointIndex: 24 */,
	{ 31403, 1, 35, 35, 5, 6, 71, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 31404, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 31404, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 31404, 1, 42, 42, 5, 6, 0, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 31404, 1, 43, 43, 9, 61, 1, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 31404, 1, 43, 43, 9, 61, 3, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 31404, 1, 44, 44, 9, 59, 13, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 31404, 1, 44, 44, 9, 59, 15, kSequencePointKind_StepOut, 0, 32 } /* seqPointIndex: 32 */,
	{ 31404, 1, 45, 45, 9, 57, 25, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 31404, 1, 45, 45, 9, 57, 27, kSequencePointKind_StepOut, 0, 34 } /* seqPointIndex: 34 */,
	{ 31404, 1, 46, 46, 9, 47, 37, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 31404, 1, 46, 46, 9, 47, 38, kSequencePointKind_StepOut, 0, 36 } /* seqPointIndex: 36 */,
	{ 31404, 1, 47, 47, 5, 6, 48, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 31405, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 31405, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 31405, 1, 50, 50, 5, 6, 0, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 31405, 1, 52, 52, 9, 35, 1, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 31405, 1, 52, 52, 9, 35, 1, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 31405, 1, 52, 52, 0, 0, 10, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 31405, 1, 53, 53, 13, 20, 13, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 31405, 1, 55, 55, 9, 39, 18, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 31405, 1, 55, 55, 9, 39, 19, kSequencePointKind_StepOut, 0, 46 } /* seqPointIndex: 46 */,
	{ 31405, 1, 56, 56, 9, 45, 25, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 31405, 1, 56, 56, 9, 45, 27, kSequencePointKind_StepOut, 0, 48 } /* seqPointIndex: 48 */,
	{ 31405, 1, 56, 56, 0, 0, 36, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 31405, 1, 57, 57, 13, 20, 39, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 31405, 1, 59, 59, 9, 96, 44, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 31405, 1, 59, 59, 9, 96, 52, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 31405, 1, 59, 59, 9, 96, 63, kSequencePointKind_StepOut, 0, 53 } /* seqPointIndex: 53 */,
	{ 31405, 1, 59, 59, 0, 0, 69, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 31405, 1, 60, 60, 9, 10, 75, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 31405, 1, 63, 63, 13, 42, 76, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 31405, 1, 63, 63, 13, 42, 82, kSequencePointKind_StepOut, 0, 57 } /* seqPointIndex: 57 */,
	{ 31405, 1, 63, 63, 13, 42, 91, kSequencePointKind_StepOut, 0, 58 } /* seqPointIndex: 58 */,
	{ 31405, 1, 64, 64, 13, 56, 98, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 31405, 1, 64, 64, 13, 56, 104, kSequencePointKind_StepOut, 0, 60 } /* seqPointIndex: 60 */,
	{ 31405, 1, 64, 64, 13, 56, 113, kSequencePointKind_StepOut, 0, 61 } /* seqPointIndex: 61 */,
	{ 31405, 1, 65, 65, 13, 68, 120, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 31405, 1, 65, 65, 13, 68, 128, kSequencePointKind_StepOut, 0, 63 } /* seqPointIndex: 63 */,
	{ 31405, 1, 71, 71, 13, 74, 135, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 31405, 1, 71, 71, 13, 74, 145, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 31405, 1, 72, 72, 13, 59, 152, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 31405, 1, 72, 72, 13, 59, 160, kSequencePointKind_StepOut, 0, 67 } /* seqPointIndex: 67 */,
	{ 31405, 1, 72, 72, 13, 59, 165, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 31405, 1, 74, 74, 13, 32, 171, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 31405, 1, 74, 74, 13, 32, 174, kSequencePointKind_StepOut, 0, 70 } /* seqPointIndex: 70 */,
	{ 31405, 1, 74, 74, 0, 0, 181, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 31405, 1, 75, 75, 13, 14, 185, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 31405, 1, 76, 76, 17, 53, 186, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 31405, 1, 76, 76, 17, 53, 191, kSequencePointKind_StepOut, 0, 74 } /* seqPointIndex: 74 */,
	{ 31405, 1, 77, 77, 13, 14, 197, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 31405, 1, 77, 77, 0, 0, 198, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 31405, 1, 79, 79, 13, 14, 200, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 31405, 1, 81, 81, 17, 44, 201, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 31405, 1, 81, 81, 17, 44, 209, kSequencePointKind_StepOut, 0, 79 } /* seqPointIndex: 79 */,
	{ 31405, 1, 82, 82, 13, 14, 215, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 31405, 1, 83, 83, 9, 10, 216, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 31405, 1, 84, 84, 5, 6, 217, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 31407, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 31407, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 31407, 1, 86, 86, 5, 65, 0, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 31407, 1, 86, 86, 5, 65, 0, kSequencePointKind_StepOut, 0, 86 } /* seqPointIndex: 86 */,
	{ 31408, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 31408, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 31408, 2, 22, 22, 13, 14, 0, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 31408, 2, 22, 22, 15, 40, 1, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 31408, 2, 22, 22, 41, 42, 10, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 31409, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 31409, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 31409, 2, 23, 23, 13, 14, 0, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 31409, 2, 23, 23, 15, 41, 1, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 31409, 2, 23, 23, 42, 43, 8, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 31410, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 31410, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 31410, 2, 27, 27, 5, 6, 0, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 31410, 2, 28, 28, 9, 71, 1, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 31410, 2, 28, 28, 9, 71, 3, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 31410, 2, 29, 29, 9, 74, 13, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 31410, 2, 29, 29, 9, 74, 15, kSequencePointKind_StepOut, 0, 103 } /* seqPointIndex: 103 */,
	{ 31410, 2, 29, 29, 9, 74, 20, kSequencePointKind_StepOut, 0, 104 } /* seqPointIndex: 104 */,
	{ 31410, 2, 30, 30, 9, 43, 30, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 31410, 2, 30, 30, 9, 43, 32, kSequencePointKind_StepOut, 0, 106 } /* seqPointIndex: 106 */,
	{ 31410, 2, 31, 31, 5, 6, 42, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 31411, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 31411, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 31411, 2, 34, 34, 5, 6, 0, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 31411, 2, 35, 35, 9, 60, 1, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 31411, 2, 35, 35, 9, 60, 14, kSequencePointKind_StepOut, 0, 112 } /* seqPointIndex: 112 */,
	{ 31411, 2, 35, 35, 9, 60, 19, kSequencePointKind_StepOut, 0, 113 } /* seqPointIndex: 113 */,
	{ 31411, 2, 36, 36, 5, 6, 25, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 31412, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 31412, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 31412, 2, 39, 39, 5, 6, 0, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 31412, 2, 40, 40, 9, 60, 1, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 31412, 2, 40, 40, 9, 60, 14, kSequencePointKind_StepOut, 0, 119 } /* seqPointIndex: 119 */,
	{ 31412, 2, 40, 40, 9, 60, 19, kSequencePointKind_StepOut, 0, 120 } /* seqPointIndex: 120 */,
	{ 31412, 2, 41, 41, 5, 6, 25, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 31413, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 31413, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 31413, 2, 44, 44, 5, 6, 0, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 31413, 2, 45, 45, 9, 57, 1, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 31413, 2, 45, 45, 9, 57, 8, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 31413, 2, 45, 45, 9, 57, 13, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 31413, 2, 46, 46, 5, 6, 19, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 31414, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 31414, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 31414, 2, 59, 59, 5, 6, 0, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 31414, 2, 60, 60, 9, 44, 1, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 31414, 2, 60, 60, 9, 44, 2, kSequencePointKind_StepOut, 0, 133 } /* seqPointIndex: 133 */,
	{ 31414, 2, 63, 63, 9, 33, 8, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 31414, 2, 63, 63, 9, 33, 13, kSequencePointKind_StepOut, 0, 135 } /* seqPointIndex: 135 */,
	{ 31414, 2, 64, 64, 9, 52, 19, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 31414, 2, 64, 64, 9, 52, 24, kSequencePointKind_StepOut, 0, 137 } /* seqPointIndex: 137 */,
	{ 31414, 2, 64, 64, 0, 0, 34, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 31414, 2, 64, 64, 53, 54, 38, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 31414, 2, 64, 64, 55, 94, 39, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 31414, 2, 64, 64, 55, 94, 45, kSequencePointKind_StepOut, 0, 141 } /* seqPointIndex: 141 */,
	{ 31414, 2, 64, 64, 95, 96, 51, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 31414, 2, 66, 66, 9, 38, 52, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 31414, 2, 66, 66, 9, 38, 58, kSequencePointKind_StepOut, 0, 144 } /* seqPointIndex: 144 */,
	{ 31414, 2, 68, 68, 9, 71, 64, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 31414, 2, 68, 68, 9, 71, 74, kSequencePointKind_StepOut, 0, 146 } /* seqPointIndex: 146 */,
	{ 31414, 2, 68, 68, 9, 71, 81, kSequencePointKind_StepOut, 0, 147 } /* seqPointIndex: 147 */,
	{ 31414, 2, 69, 69, 9, 43, 87, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 31414, 2, 69, 69, 9, 43, 104, kSequencePointKind_StepOut, 0, 149 } /* seqPointIndex: 149 */,
	{ 31414, 2, 70, 70, 9, 50, 109, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 31414, 2, 73, 73, 14, 23, 115, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 31414, 2, 73, 73, 0, 0, 118, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 31414, 2, 74, 74, 9, 10, 120, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 31414, 2, 75, 75, 13, 84, 121, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 31414, 2, 75, 75, 13, 84, 128, kSequencePointKind_StepOut, 0, 155 } /* seqPointIndex: 155 */,
	{ 31414, 2, 75, 75, 13, 84, 134, kSequencePointKind_StepOut, 0, 156 } /* seqPointIndex: 156 */,
	{ 31414, 2, 80, 80, 13, 92, 141, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 31414, 2, 80, 80, 13, 92, 146, kSequencePointKind_StepOut, 0, 158 } /* seqPointIndex: 158 */,
	{ 31414, 2, 80, 80, 13, 92, 157, kSequencePointKind_StepOut, 0, 159 } /* seqPointIndex: 159 */,
	{ 31414, 2, 81, 81, 13, 30, 165, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 31414, 2, 86, 86, 13, 47, 174, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 31414, 2, 86, 86, 0, 0, 181, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 31414, 2, 86, 86, 48, 49, 185, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 31414, 2, 86, 86, 50, 80, 186, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 31414, 2, 86, 86, 81, 82, 189, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 31414, 2, 88, 88, 13, 37, 190, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 31414, 2, 88, 88, 13, 37, 196, kSequencePointKind_StepOut, 0, 167 } /* seqPointIndex: 167 */,
	{ 31414, 2, 89, 89, 9, 10, 202, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 31414, 2, 73, 73, 46, 49, 203, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 31414, 2, 73, 73, 25, 44, 209, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 31414, 2, 73, 73, 0, 0, 218, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 31414, 2, 91, 91, 9, 84, 222, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 31414, 2, 91, 91, 9, 84, 234, kSequencePointKind_StepOut, 0, 173 } /* seqPointIndex: 173 */,
	{ 31414, 2, 94, 94, 9, 25, 240, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 31414, 2, 94, 94, 9, 25, 257, kSequencePointKind_StepOut, 0, 175 } /* seqPointIndex: 175 */,
	{ 31414, 2, 95, 95, 9, 33, 263, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 31414, 2, 95, 95, 9, 33, 269, kSequencePointKind_StepOut, 0, 177 } /* seqPointIndex: 177 */,
	{ 31414, 2, 97, 97, 9, 41, 275, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 31414, 2, 97, 97, 9, 41, 282, kSequencePointKind_StepOut, 0, 179 } /* seqPointIndex: 179 */,
	{ 31414, 2, 98, 98, 9, 36, 288, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 31414, 2, 98, 98, 9, 36, 290, kSequencePointKind_StepOut, 0, 181 } /* seqPointIndex: 181 */,
	{ 31414, 2, 99, 99, 5, 6, 296, kSequencePointKind_Normal, 0, 182 } /* seqPointIndex: 182 */,
	{ 31415, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
	{ 31415, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 184 } /* seqPointIndex: 184 */,
	{ 31415, 2, 15, 15, 5, 36, 0, kSequencePointKind_Normal, 0, 185 } /* seqPointIndex: 185 */,
	{ 31415, 2, 15, 15, 5, 36, 12, kSequencePointKind_StepOut, 0, 186 } /* seqPointIndex: 186 */,
	{ 31416, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 187 } /* seqPointIndex: 187 */,
	{ 31416, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 188 } /* seqPointIndex: 188 */,
	{ 31416, 2, 101, 101, 5, 64, 0, kSequencePointKind_Normal, 0, 189 } /* seqPointIndex: 189 */,
	{ 31416, 2, 101, 101, 5, 64, 0, kSequencePointKind_StepOut, 0, 190 } /* seqPointIndex: 190 */,
	{ 31416, 2, 103, 103, 5, 59, 10, kSequencePointKind_Normal, 0, 191 } /* seqPointIndex: 191 */,
	{ 31416, 2, 103, 103, 5, 59, 10, kSequencePointKind_StepOut, 0, 192 } /* seqPointIndex: 192 */,
	{ 31417, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 193 } /* seqPointIndex: 193 */,
	{ 31417, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 194 } /* seqPointIndex: 194 */,
	{ 31417, 3, 15, 15, 4, 5, 0, kSequencePointKind_Normal, 0, 195 } /* seqPointIndex: 195 */,
	{ 31417, 3, 16, 16, 8, 58, 1, kSequencePointKind_Normal, 0, 196 } /* seqPointIndex: 196 */,
	{ 31417, 3, 16, 16, 8, 58, 14, kSequencePointKind_StepOut, 0, 197 } /* seqPointIndex: 197 */,
	{ 31417, 3, 16, 16, 8, 58, 19, kSequencePointKind_StepOut, 0, 198 } /* seqPointIndex: 198 */,
	{ 31417, 3, 17, 17, 4, 5, 25, kSequencePointKind_Normal, 0, 199 } /* seqPointIndex: 199 */,
	{ 31418, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 200 } /* seqPointIndex: 200 */,
	{ 31418, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 201 } /* seqPointIndex: 201 */,
	{ 31418, 3, 20, 20, 5, 6, 0, kSequencePointKind_Normal, 0, 202 } /* seqPointIndex: 202 */,
	{ 31418, 3, 21, 21, 9, 38, 1, kSequencePointKind_Normal, 0, 203 } /* seqPointIndex: 203 */,
	{ 31418, 3, 21, 21, 9, 38, 6, kSequencePointKind_StepOut, 0, 204 } /* seqPointIndex: 204 */,
	{ 31418, 3, 22, 22, 9, 16, 12, kSequencePointKind_Normal, 0, 205 } /* seqPointIndex: 205 */,
	{ 31418, 3, 22, 22, 42, 51, 13, kSequencePointKind_Normal, 0, 206 } /* seqPointIndex: 206 */,
	{ 31418, 3, 22, 22, 42, 51, 15, kSequencePointKind_StepOut, 0, 207 } /* seqPointIndex: 207 */,
	{ 31418, 3, 22, 22, 42, 51, 20, kSequencePointKind_StepOut, 0, 208 } /* seqPointIndex: 208 */,
	{ 31418, 3, 22, 22, 0, 0, 26, kSequencePointKind_Normal, 0, 209 } /* seqPointIndex: 209 */,
	{ 31418, 3, 22, 22, 18, 38, 28, kSequencePointKind_Normal, 0, 210 } /* seqPointIndex: 210 */,
	{ 31418, 3, 22, 22, 18, 38, 30, kSequencePointKind_StepOut, 0, 211 } /* seqPointIndex: 211 */,
	{ 31418, 3, 23, 23, 9, 10, 36, kSequencePointKind_Normal, 0, 212 } /* seqPointIndex: 212 */,
	{ 31418, 3, 24, 24, 18, 27, 37, kSequencePointKind_Normal, 0, 213 } /* seqPointIndex: 213 */,
	{ 31418, 3, 24, 24, 0, 0, 39, kSequencePointKind_Normal, 0, 214 } /* seqPointIndex: 214 */,
	{ 31418, 3, 25, 25, 13, 14, 41, kSequencePointKind_Normal, 0, 215 } /* seqPointIndex: 215 */,
	{ 31418, 3, 26, 26, 17, 71, 42, kSequencePointKind_Normal, 0, 216 } /* seqPointIndex: 216 */,
	{ 31418, 3, 26, 26, 17, 71, 43, kSequencePointKind_StepOut, 0, 217 } /* seqPointIndex: 217 */,
	{ 31418, 3, 26, 26, 17, 71, 52, kSequencePointKind_StepOut, 0, 218 } /* seqPointIndex: 218 */,
	{ 31418, 3, 26, 26, 17, 71, 64, kSequencePointKind_StepOut, 0, 219 } /* seqPointIndex: 219 */,
	{ 31418, 3, 26, 26, 17, 71, 73, kSequencePointKind_StepOut, 0, 220 } /* seqPointIndex: 220 */,
	{ 31418, 3, 26, 26, 17, 71, 78, kSequencePointKind_StepOut, 0, 221 } /* seqPointIndex: 221 */,
	{ 31418, 3, 26, 26, 0, 0, 84, kSequencePointKind_Normal, 0, 222 } /* seqPointIndex: 222 */,
	{ 31418, 3, 27, 27, 17, 18, 87, kSequencePointKind_Normal, 0, 223 } /* seqPointIndex: 223 */,
	{ 31418, 3, 28, 28, 21, 57, 88, kSequencePointKind_Normal, 0, 224 } /* seqPointIndex: 224 */,
	{ 31418, 3, 28, 28, 21, 57, 99, kSequencePointKind_StepOut, 0, 225 } /* seqPointIndex: 225 */,
	{ 31418, 3, 28, 28, 21, 57, 104, kSequencePointKind_StepOut, 0, 226 } /* seqPointIndex: 226 */,
	{ 31418, 3, 30, 30, 17, 18, 110, kSequencePointKind_Normal, 0, 227 } /* seqPointIndex: 227 */,
	{ 31418, 3, 31, 31, 13, 14, 111, kSequencePointKind_Normal, 0, 228 } /* seqPointIndex: 228 */,
	{ 31418, 3, 24, 24, 53, 56, 112, kSequencePointKind_Normal, 0, 229 } /* seqPointIndex: 229 */,
	{ 31418, 3, 24, 24, 29, 51, 116, kSequencePointKind_Normal, 0, 230 } /* seqPointIndex: 230 */,
	{ 31418, 3, 24, 24, 29, 51, 123, kSequencePointKind_StepOut, 0, 231 } /* seqPointIndex: 231 */,
	{ 31418, 3, 24, 24, 0, 0, 132, kSequencePointKind_Normal, 0, 232 } /* seqPointIndex: 232 */,
	{ 31418, 3, 32, 32, 9, 10, 136, kSequencePointKind_Normal, 0, 233 } /* seqPointIndex: 233 */,
	{ 31418, 3, 22, 22, 39, 41, 137, kSequencePointKind_Normal, 0, 234 } /* seqPointIndex: 234 */,
	{ 31418, 3, 22, 22, 39, 41, 139, kSequencePointKind_StepOut, 0, 235 } /* seqPointIndex: 235 */,
	{ 31418, 3, 22, 22, 0, 0, 148, kSequencePointKind_Normal, 0, 236 } /* seqPointIndex: 236 */,
	{ 31418, 3, 22, 22, 0, 0, 156, kSequencePointKind_StepOut, 0, 237 } /* seqPointIndex: 237 */,
	{ 31418, 3, 33, 33, 5, 6, 163, kSequencePointKind_Normal, 0, 238 } /* seqPointIndex: 238 */,
	{ 31419, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 239 } /* seqPointIndex: 239 */,
	{ 31419, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 240 } /* seqPointIndex: 240 */,
	{ 31419, 3, 9, 9, 22, 64, 0, kSequencePointKind_Normal, 0, 241 } /* seqPointIndex: 241 */,
	{ 31419, 3, 10, 10, 22, 66, 7, kSequencePointKind_Normal, 0, 242 } /* seqPointIndex: 242 */,
	{ 31419, 3, 12, 12, 22, 72, 14, kSequencePointKind_Normal, 0, 243 } /* seqPointIndex: 243 */,
	{ 31419, 3, 12, 12, 22, 72, 15, kSequencePointKind_StepOut, 0, 244 } /* seqPointIndex: 244 */,
	{ 31419, 3, 12, 12, 22, 72, 26, kSequencePointKind_StepOut, 0, 245 } /* seqPointIndex: 245 */,
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
{ "D:\\P2-Remesy_Theo\\UnityProject\\ARSheep\\Assets\\Script\\ImageTracking.cs", { 122, 230, 80, 177, 118, 168, 207, 184, 65, 212, 149, 137, 244, 11, 209, 76} }, //3 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[3] = 
{
	{ 4523, 1 },
	{ 4524, 2 },
	{ 4525, 3 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[11] = 
{
	{ 0, 72 },
	{ 16, 33 },
	{ 0, 218 },
	{ 75, 217 },
	{ 0, 12 },
	{ 0, 297 },
	{ 115, 222 },
	{ 120, 203 },
	{ 0, 164 },
	{ 28, 137 },
	{ 37, 136 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[19] = 
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
	{ 0, 0, 0 } /* System.Void ImageTracking::Start() */,
	{ 164, 8, 3 } /* System.Void ImageTracking::UpdateImages(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs) */,
	{ 0, 0, 0 } /* System.Void ImageTracking::.ctor() */,
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
	246,
	(Il2CppSequencePoint*)g_sequencePointsAssemblyU2DCSharp,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	3,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
