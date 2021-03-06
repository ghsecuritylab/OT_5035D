 
 
#ifndef SPEECH_COEFF_DEFAULT_H1 
#define SPEECH_COEFF_DEFAULT_H1 
#ifndef FALSE1 
#define FALSE1 0
#endif
//speech parameter depen on BT_CHIP cersion 
#if defined(MTK_MT6611) 
#define BT_COMP_FILTER (1 << 15) 
#define BT_SYNC_DELAY  86 
#elif defined(MTK_MT6612) 
#define BT_COMP_FILTER (1 << 15) 
#define BT_SYNC_DELAY  86 
#elif defined(MTK_MT6616) || defined(MTK_MT6620) || defined(MTK_MT6622) || defined(MTK_MT6626) || defined(MTK_MT6628) 
#define BT_COMP_FILTER (1 << 15) 
#define BT_SYNC_DELAY  86 
#else 
#define BT_COMP_FILTER (0 << 15) 
#define BT_SYNC_DELAY  86 
#endif 
#ifdef MTK_DUAL_MIC_SUPPORT 
#define SPEECH_MODE_PARA13 (371) 
#define SPEECH_MODE_PARA14 (23) 
#else 
#define SPEECH_MODE_PARA13 (0) 
#define SPEECH_MODE_PARA14 (0) 
#endif 
#define DEFAULT_SPEECH_NORMAL_MODE_PARA1 \
    96,   253,  8196,     0, 57351,    31,   400,   160,\
   272,  4325,    99,     0, 20488,   371|SPEECH_MODE_PARA13,    23|SPEECH_MODE_PARA14,  8192 
#define DEFAULT_SPEECH_EARPHONE_MODE_PARA1 \
     0,   221, 10756,    31, 57351,    31,   400,    64,\
    80,  4325,    99,     0, 20488,     0,     0,     0 
#define DEFAULT_SPEECH_LOUDSPK_MODE_PARA1 \
    96,   224, 10756,    31, 57351, 24607,   400,   132,\
    84,  4325,    99,     0, 20488,     0,     0,     0 
#define DEFAULT_SPEECH_BT_EARPHONE_MODE_PARA1 \
     0,   253, 10756,    31, 53255,    31,   400,     0,\
    80,  4325,    99,     0, 53256|BT_COMP_FILTER,     0,     0,BT_SYNC_DELAY 
#define DEFAULT_SPEECH_BT_CORDLESS_MODE_PARA1 \
     0,     0,     0,     0,     0,     0,     0,     0,\
     0,     0,     0,     0,     0,     0,     0,     0 
#define DEFAULT_SPEECH_CARKIT_MODE_PARA1 \
    96,   224,  5256,    31, 57351, 24607,   400,   132,\
    84,  4325,    99,     0, 20488,     0,     0,     0 
#define DEFAULT_SPEECH_AUX1_MODE_PARA1 \
     0,     0,     0,     0,     0,     0,     0,     0,\
     0,     0,     0,     0,     0,     0,     0,     0 
#define DEFAULT_SPEECH_AUX2_MODE_PARA1 \
     0,     0,     0,     0,     0,     0,     0,     0,\
     0,     0,     0,     0,     0,     0,     0,     0 
#define DEFAULT_SPEECH_COMMON_PARA1 \
     0, 55997, 31000, 10752, 32769,     0,     0,     0, \
     0,     0,     0,     0
#define DEFAULT_SPEECH_VOL_PARA1 \
     0,     0,     0,     0 
#define DEFAULT_AUDIO_DEBUG_INFO1 \
     0,     0,     0,     0,     0,     0,     0,     0, \
     0,     0,     0,     0,     0,     0,     0,     0
 
#define DEFAULT_VM_SUPPORT1 FALSE 
#define DEFAULT_AUTO_VM1 FALSE 
#define MICBAIS1  1900
/* The Bluetooth PCM digital volume */
#define DEFAULT_BT_PCM_IN_VOL1  0x100
#define DEFAULT_BT_PCM_OUT_VOL1  0x1000
#define DEFAULT_WB_SPEECH_NORMAL_MODE_PARA1 \
    96,   253, 16388,    31, 57607,    31,   400,    96,\
    80,  4325,    99,     0, 16392,   371|SPEECH_MODE_PARA13,    23|SPEECH_MODE_PARA14,  8192 
#define DEFAULT_WB_SPEECH_EARPHONE_MODE_PARA1 \
     0,   189, 10756,    31, 57607,    31,   400,     0,\
    80,  4325,    99,     0, 16392,     0,     0,     0 
#define DEFAULT_WB_SPEECH_LOUDSPK_MODE_PARA1 \
    96,   224,  5256,    31, 57607, 24607,   400,   132,\
    84,  4325,    99,     0, 16392,     0,     0,     0 
#define DEFAULT_WB_SPEECH_BT_EARPHONE_MODE_PARA1 \
     0,   253, 10756,    31, 53511,    31,   400,     0,\
    80,  4325,    99,     0, 49160 | BT_COMP_FILTER,     0,     0,BT_SYNC_DELAY 
#define DEFAULT_WB_SPEECH_BT_CORDLESS_MODE_PARA1 \
     0,     0,     0,     0,     0,     0,     0,     0,\
     0,     0,     0,     0,     0,     0,     0,     0 
#define DEFAULT_WB_SPEECH_CARKIT_MODE_PARA1 \
    96,   224,  5256,    31, 57607, 24607,   400,   132,\
    84,  4325,    99,     0, 16392,     0,     0,     0 
#define DEFAULT_WB_SPEECH_AUX1_MODE_PARA1 \
    96,   224,  5256,    31, 57607,     0,   400,     0,\
  4112,  4325,    11,     0,     0,     0,     0,     0 
#define DEFAULT_WB_SPEECH_AUX2_MODE_PARA1 \
     0,     0,     0,     0,     0,     0,     0,     0,\
     0,     0,     0,     0,     0,     0,     0,     0 
#endif 
