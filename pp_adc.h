/***************************************************************************************
* @file     pp_adc.h
* @version  v1.0
* @date     25th Nov, 2022
* @note     Produced by Reizy
* @note     
*************************************************************************************/
#ifndef __PP_ADC_H
#define __PP_ADC_H

/******************************************************************************/
/* Include Files                                                              */
/******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h> 
//*** made by VORAGO / SEGGER
// #include "va108xx.h"
// #include "reb_log.h"
// #include "reb_board.h"
// #include "reb_adt75.h"
// #include "driver_common.h"
// #include "reb_max11619.h"
// #include "reb_timer.h"
// #include "gpio_va108xx.h"
// #include "segger_rtt.h" 
// #include "irq_va108xx.h"
// //*** made by Prelude Project
// #include "pp_i2c.h"

/******************************************************************************/
/* local pre-processor symbols/macros ('#define')                             */
/******************************************************************************/
//*** define I2C Pin
#define PERIPH_CLK_ENAB_I2CA 0x10    
#define PERIPH_CLK_ENAB_I2CB 0x11
//*** define the I2C TX/RX Address:0xAE/0xAF
#define I2C_ADDR_TX 0xAE
#define I2C_ADDR_RX 0xAF

//*** define Vor_Sleep time
#define time_100ms 100
#define time_1s 1000

//*** define the symbol
#define Enable 1
// Control Power to Selected Components
#define CubeConSignal 0x00001
#define CubeConMotor  0x00004
#define CubeSence1    0x00010
#define CubeSence2    0x00040
#define CubeStar      0x00100
#define CubeWheel1    0x00400
#define CubeWheel2    0x01000
#define CubeWheel3    0x04000
#define MotorPower    0x10000
#define GPSPower      0x40000
// TC Command name
#define SetConMode 13
#define SetEstMode 14
// Program Index
#define InternalFlashProgram 1
#define CubeACP 10
// Control Mode
#define NoControl 0
#define Detumbling 1
#define YThomson 2
#define YWheelMomentum_IPA 3
#define YWheelMomentum_SS 4
#define XYZWheelCon 5
#define RWSunTracking 6
#define RWTargetTracking 7
#define V_FastSpinDetumbling 8
#define FastSpinDetumbling 9
#define UserConMode_1 10
#define UserConMode_2 11
#define StopRW 12
#define UserCodedConMode 13
#define SunTracking_YaworRoll 14
#define TargetTracking_Yaw 15
//Estimation Mode
#define NoEstimation 0
#define MEMSRate 1
#define MTMRateFilter 2
#define MTMRateFilter_Pitch 3
#define MTMandTRIAD 4
#define FullEKF 5
#define MEMSEKF 6
#define UserCodedEstMode 7
// Orbit Parameter
#define INCLINATION 0
#define ECCENTRICITY 1
#define RAAN 2
#define OMEGA 3
#define B_STAR 4
#define MEANMOTION 5
#define MEANANOMALY 6
#define EPOCH 7
// Direction
#define x 0
#define y 1
#define z 2
#define posi 0
#define nega 1
// TLM Byte Index
#define BYTE0123 0
#define BYTE2345 1
#define SIZE_OF_16bit 40
#define BYTE01 0
#define BYTE12 1
#define BYTE23 2
#define BYTE34 3
#define BYTE45 4
#define BYTE56 5
#define BYTE67 6
//*** define the program for EM = 1/ BBM = 0
#define EM 0
#define PRINT_TLM 1
#define SEQUENCE_VERIFICATION 0
//*** define for adc
#define TLM_ELE 72
#define TC_ELE 32
#define HK_size 46
//*** define kind of HK
#define NORMAL 1
#define SEQUENCE 2
#define HEALTH 3

/******************************************************************************/
/* Global variables declared here  (definition is pp_integration_main.c)      */
/******************************************************************************/
// none


/******************************************************************************/ 
/* Local type definitions ('typedef')                                         */ 
/******************************************************************************/
// for adc
typedef struct adc_t{
  int ID;
  int8_t  STATUS;
  uint8_t flag;
  uint8_t TLM[TLM_ELE];
  uint8_t TC[TC_ELE];
  int16_t HK_normal[HK_size];

} adc_t;

/******************************************************************************/ 
/* function prototypes                                                        */ 
/******************************************************************************/
//*** sequence function
// uint8_t startup_confirmation_adc(adc_t*);
// uint8_t initial_angular_rate_estimation(adc_t*);
// uint8_t detumbling(adc_t*);
// //*** single function
// void judge_eclipse(adc_t*, bool isEclipse[][2]);
// void get_HK_adc(adc_t*, uint8_t);


// //*** i2c for CubeComputer
// // i2c for port a/b
// void I2CA_CubeComputer(adc_t*);
// void I2CB_CubeComputer(adc_t*);
// // set size of Tx/Rx data
// uint8_t get_TC_byte(int);
// uint8_t get_TLM_byte(int);
// // set TC data
// void set_TC_data(adc_t*);


// //*** bit shift
// int32_t create_4byte_data(uint8_t,uint8_t,uint8_t,uint8_t);
// int16_t create_2byte_data(uint8_t,uint8_t);
// void    devide_into_4bit_data(uint8_t,int8_t*);
// void    devide_into_2bit_data(uint8_t,int8_t*);
// void    devide_into_1bit_data(uint8_t,int8_t*);


// //*** Initialize adc_t
// void  init_adct(adc_t*);

// //*** useful function
// bool    isTCSuccess(adc_t*);
// void    set_HK_array(adc_t*);
// void    print_HK(adc_t*, uint8_t);
// void    print_TLM(adc_t*);
#endif