


#ifndef _WMT_PLAT_H_
#define _WMT_PLAT_H_
#include "osal_typedef.h"
#include "osal.h"
#include <mach/mtk_wcn_cmb_stub.h>
#include "mtk_wcn_cmb_hw.h"





#if 0 /* [GeorgeKuo] remove COMBO_AUDIO FLAG */
#define COMBO_AUDIO_BT_MASK (0x1UL)
#define COMBO_AUDIO_BT_PCM_ON (0x1UL << 0)
#define COMBO_AUDIO_BT_PCM_OFF (0x0UL << 0)

#define COMBO_AUDIO_FM_MASK (0x2UL)
#define COMBO_AUDIO_FM_LINEIN (0x0UL << 1)
#define COMBO_AUDIO_FM_I2S (0x1UL << 1)

#define COMBO_AUDIO_PIN_MASK     (0x4UL)
#define COMBO_AUDIO_PIN_SHARE    (0x1UL << 2)
#define COMBO_AUDIO_PIN_SEPARATE (0x0UL << 2)
#endif


typedef enum _ENUM_FUNC_STATE_{
    FUNC_ON = 0,
    FUNC_OFF = 1,
    FUNC_RST = 2,
    FUNC_CTRL_MAX,
} ENUM_FUNC_STATE, *P_ENUM_FUNC_STATE;

typedef enum _ENUM_PIN_ID_{
    PIN_LDO = 0,
    PIN_PMU = 1,
    PIN_RTC = 2,
    PIN_RST = 3,
    PIN_BGF_EINT = 4,
    PIN_WIFI_EINT = 5,
    PIN_ALL_EINT = 6,
    PIN_UART_GRP = 7,
    PIN_PCM_GRP = 8,
    PIN_I2S_GRP = 9,
    PIN_SDIO_GRP = 10,
    PIN_GPS_SYNC = 11,
    PIN_GPS_LNA = 12,
    PIN_ID_MAX
} ENUM_PIN_ID, *P_ENUM_PIN_ID;

typedef enum _ENUM_PIN_STATE_{
    PIN_STA_INIT = 0,
    PIN_STA_OUT_L = 1,
    PIN_STA_OUT_H = 2,
    PIN_STA_IN_L = 3,
    PIN_STA_MUX = 4,
    PIN_STA_EINT_EN = 5,
    PIN_STA_EINT_DIS = 6,
    PIN_STA_DEINIT = 7,
    PIN_STA_MAX
} ENUM_PIN_STATE, *P_ENUM_PIN_STATE;

typedef enum _CMB_IF_TYPE_{
    CMB_IF_UART = 0,
    CMB_IF_WIFI_SDIO = 1,
    CMB_IF_BGF_SDIO = 2,
    CMB_IF_BGWF_SDIO = 3,
    CMB_IF_TYPE_MAX
} CMB_IF_TYPE, *P_CMB_IF_TYPE;

typedef INT32 (*fp_set_pin)(ENUM_PIN_STATE);

typedef enum _ENUM_WL_OP_{
    WL_OP_GET = 0,
    WL_OP_PUT = 1,
    WL_OP_MAX
} ENUM_WL_OP, *P_ENUM_WL_OP;







INT32
wmt_plat_init (P_PWR_SEQ_TIME pPwrSeqTime);

INT32
wmt_plat_deinit (VOID);

INT32
wmt_plat_irq_ctrl (
    ENUM_FUNC_STATE state
    );

INT32
wmt_plat_pwr_ctrl (
    ENUM_FUNC_STATE state
    );

INT32
wmt_plat_ps_ctrl (
    ENUM_FUNC_STATE state
    );

INT32
wmt_plat_gpio_ctrl (
    ENUM_PIN_ID id,
    ENUM_PIN_STATE state
    );

INT32
wmt_plat_eirq_ctrl (
    ENUM_PIN_ID id,
    ENUM_PIN_STATE state
    );

INT32
wmt_plat_audio_ctrl (
    CMB_STUB_AIF_X state,
    CMB_STUB_AIF_CTRL ctrl
    );

INT32
wmt_plat_sdio_ctrl (
    UINT32 sdioPortNum,
    ENUM_FUNC_STATE on
    );


INT32
wmt_plat_wake_lock_ctrl(
    ENUM_WL_OP opId
    );


#endif /* _WMT_PLAT_H_ */

