/***************************************************************************************
* @file     pp_cdh_initialize.h
* @version  v1.0
* @date     21th July, 2022
* @note     Produced by Gun/Reizy
* @note     
*************************************************************************************/
#ifndef __PP_CDH_INITIALIZE_H
#define __PP_CDH_INITIALIZE_H
/******************************************************************************/
/* Include Files                                                              */
/******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pp_cmd_def.h"
#include "pp_adc.h"

/******************************************************************************/
/* Define CDH STRUCTURE                                                       */
/******************************************************************************/
#define HK_DATA_SIZE 304
typedef struct cdh_t{
    uint8_t     sequence_flag;
    uint8_t     error_flag;
    uint16_t*   hk[HK_DATA_SIZE];
    uint16_t    cmd;
    uint8_t     cmd_ack;
    uint8_t     dep_p_state;
    uint8_t     dep_n_state;
    uint16_t    wdt_cnt;
}cdh_t;

/******************************************************************************/ 
/* function prototypes                                                        */ 
/******************************************************************************/
extern void cdh_initialize(cdh_t *pt_cdh);
extern void wdt_init(cdh_t *pt_cdh);
extern void cdh_single_cmd(cdh_t *pt_cdh, adc_t *pt_adc);
extern void auto_sequence(cdh_t *pt_cdh, adc_t *pt_adc);
extern void error_sequence(cdh_t *pt_cdh, adc_t *pt_adc);
#endif