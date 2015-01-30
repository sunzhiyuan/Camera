#ifndef __TS_COMM_DEF_H__
#define __TS_COMM_DEF_H__
typedef enum enumVideoType
{
    VIDEO_PROCSS_NONE = -1,
    VIDEO_PROCESS_VIDEO_DENOISER = 0,
    VIDEO_PROCESS_MOVIE_SOLID,
    VIDEO_PROCESS_MOVIE_SOLID_TS,
    VIDEO_PROCESS_VIDEO_WDR,
}VideoType;
typedef enum enumPhotoType
{
    PHOTO_PROCESS_NONE = -1,
    PHOTO_PROCESS_NIGHTPORTRAIT = 0,
    PHOTO_PROCESS_HDR,
    PHOTO_PROCESS_PHOTOSOLID,
    PHOTO_PROCESS_DENOISER,
    PHOTO_PROCESS_SUPERRESOLUTION,
    PHOTO_PROCESS_SUPERZOOM,
    PHOTO_PROCESS_SUPERRESOLUTIONFAST,
    PHOTO_PROCESS_ULTRANR,
}PhotoType;
typedef void (*ALLOCATECALLBACK)(void **buffer, int bufferSize, void *caller);
typedef void (*DEALLOCATECALLBACK)(void *caller);

// public param key
#define TS_YUVFORMAT_KEY  "ts_yuv_format"

// param key
#define TS_FIX_LEVEL_PARAM                             "ts_fix_level"
#define TS_MOVING_SUBJECT_LEVEL_PARAM                  "ts_moving_subject_level"
#define TS_CLIP_RATIO                                  "ts_clip_ratio"

// ts ultranr feature param key
#define TS_ULTRANR_NUMBER_OF_THREAD_TO_PROCESS  "ts_ultranr_nthreads"
#define TS_ULTRANR_LUMA_NOISE_REDUCTION_LEVEL  "ts_ultranr_luma_nl_level"
#define TS_ULTRANR_CHROMA_NOISE_REDUCTION_LEVEL  "ts_ultranr_chroma_nl_level"
#define TS_ULTRANR_SHARPEN_LEVEL  "ts_ultranr_sharpen_level"
#define TS_ULTRANR_OBJ_BLUR_CORRECTION_LEVEL  "ts_ultranr_obj_level"
// end
// ts nightshot feature param key
#define TS_PHOTOSOLID_GAMMA  "ts_photosolid_gamma"
#define TS_PHOTOSOLID_SATURATION  "ts_photosolid_saturation"
#define TS_PHOTOSOLID_SHADOWRATIO  "ts_photosolid_shadowratio"
#define TS_PHOTOSOLID_UNSHARP_LEVEL  "ts_photosolid_unsharp_level"
#define TS_PHOTOSOLID_LUMA_NOISE_REDUCTION_LEVEL  "ts_photosolid_luma_nl_level"
#define TS_PHOTOSOLID_CHROMA_NOISE_REDUCTION_LEVEL  "ts_photosolid_chroma_nl_level"
// end
#endif // __TS_COMM_DEF_H__
