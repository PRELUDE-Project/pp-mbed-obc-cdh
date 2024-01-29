#ifndef __PP_CMD_DEF_H
#define __PP_CMD_DEF_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/******************************************************************************/
/* Define MODE                                                                */
/******************************************************************************/
#define EM  0
#define FM  1

/******************************************************************************/
/* Define Status                                                              */
/******************************************************************************/
#define STEADY_STATE    0
#define ERROR_STATE     1

/******************************************************************************/
/* Define CDH single command                                                  */
/******************************************************************************/
//*** single command for Main CDH
#define SUB_CDH_RESET       0x5000
#define EPS_POWER_ON        0x5001
#define EPS_POWER_OFF       0x5002
#define EPS_HEALTH_CHECK    0x5010
#define ADC_HEALTH_CHECK    0x5011
#define COM_HEALTH_CHECK    0x5012
#define GET_EPS_HK          0x5020
#define GET_ADC_HK          0x5021
#define GET_COM_HK          0x5022
#define GET_GNSS_HK         0x5023
#define GET_MIS_HK          0x5024
#define GET_DEP_SW_STATE_P  0x5025
#define GET_DEP_SW_STATE_N  0x5026
#define KILL_SW_ON_CDH      0x5098
#define KILL_SW_OFF_CDH     0x5099
//*** single command for Sub CDH
#define MAIN_CDH_RESET      0x5100
//*** single command for EPS
#define ADC_POWER_ON        0x5201
#define ADC_POWER_OFF       0x5202
#define COM_POWER_ON        0x5203
#define COM_POWER_OFF       0x5204
#define TRX_POWER_ON        0x5205
#define TRX_POWER_OFF       0x5206
#define GNSS_POWER_ON       0x5207
#define GNSS_POWER_OFF      0x5208
#define HRM_HEAT_ON         0x5209
#define HRM_HEAT_OFF        0x5210
#define CAM_POWER_ON        0x5211
#define CAM_POWER_OFF       0x5212
#define MIS_POWER_ON        0x5213
#define MIS_POWER_OFF       0x5214
#define HEATER_1_POWER_ON   0x5215
#define HEATER_1_POWER_OFF  0x5216
#define HEATER_2_POWER_ON   0x5217
#define HEATER_2_POWER_OFF  0x5218
#define HEATER_3_POWER_ON   0x5219
#define HEATER_3_POWER_OFF  0x5220
#define KILL_SW_ON_EPS      0x5221
#define KILL_SW_OFF_EPS     0x5222

#define EPS_HK_SEN_ON       0x5230
#define EPS_HK_SEN_OFF      0x5231

//*** single command for ADC
#define ADC_ANGULAR_RATE_EST    0x5301
#define ADC_DETUMBLING          0x5302

//*** single command for COM
#define SD_1_HEALTH_CHECK   0x5401
#define SD_2_HEALTH_CHECK   0x5402
#define TRX_HEALTH_CHECK    0x5403
#define CAM_HEALTH_CHECK    0x5404

#endif