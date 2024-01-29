/******************************************************************************/
/* Include Files                                                              */
/******************************************************************************/
#include "pp_adc.h"
/******************************************************************************/
/* local pre-processor symbols/macros ('#define')                             */
/******************************************************************************/

//*** none

/******************************************************************************/ 
/* function detail                                                            */ 
/******************************************************************************/
//*** FIXME!!
// void get_HK_adc(adc_t *pt_adc, uint8_t HK_mode){// FIXNE
//   switch(HK_mode){
//   case NORMAL:
//     printf("\n-get_HK_adc_normal start-\n");
//     /*Get ADCS State (ID = 190)*/
//     // pt_adc->ID = 190;
//     // I2CB_CubeComputer(pt_adc);
//     // set_HK_array(pt_adc);
//     /*Get ADCS State (ID = 195)*/
//     // pt_adc->ID = 195;
//     // I2CB_CubeComputer(pt_adc);
//     // set_HK_array(pt_adc);
//     /*Get ADCS State (ID = 190)*/
//     pt_adc->ID = 132;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 224;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 146;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 218;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 147;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 148;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 149;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 150;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 219;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 171;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 232;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 172;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 173;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 198;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 174;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
//     pt_adc->ID = 175;
//     I2CB_CubeComputer(pt_adc);
//     set_HK_array(pt_adc);
    
//     break;
    
//   case SEQUENCE:
//     printf("\n-get_HK_adc_sequence start-\n");
//     // TODO

    
//     break;
    
//   case HEALTH:
//     printf("\n-get_HK_adc_health start-\n");
//     // TODO
    
//     break;
    
//   default:
    
//     break;
//   }
  
//   printf("\n-get_HK_adc finish-\n");
// }

// void set_HK_array(adc_t *pt_adc){
//   switch(pt_adc->ID){
//   case 190:
//     for(int i=0;i<5;i++){
//       pt_adc->HK_normal[i] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     for(int i=0;i<21;i++){
//       pt_adc->HK_normal[i+5] = create_2byte_data(pt_adc->TLM[2*i+12],pt_adc->TLM[2*i+1+12]);
//     }
    
//     break;
      
//   case 195:
//     for(int i=0;i<19;i++){
//       pt_adc->HK_normal[i+26] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 132:
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 224:
//     for(int i=0;i<2;i++){
//       pt_adc->HK_normal[i+3] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 146: // Estimated Euler Angle
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+5] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 218: // Estimated Quaternion
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+8] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 147: // Estimated Angular Rate
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+11] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 148: // Position
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+14] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 149: // Velocity
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+17] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;

//   case 150: // Position in WGS-84
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+20] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 219: // Position in ECEF
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+23] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 171: // CubeSence1 Current
//     for(int i=0;i<2;i++){
//       pt_adc->HK_normal[i+26] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 232: // CubeSence2 Current
//     for(int i=0;i<2;i++){
//       pt_adc->HK_normal[i+28] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 172: // CubeControl Current
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+30] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 173: // Wheel Current
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+33] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 198: // CubeStar and Touquer Current and Temperature
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+36] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 174: // Magnetoquer and MCU Temperature
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+39] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   case 175: // Rate Sensor Temperature
//     for(int i=0;i<3;i++){
//       pt_adc->HK_normal[i+42] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//     }
//     break;
    
//   default:    
//     break;
//   }
// }

// void print_HK(adc_t *pt_adc, uint8_t HK_mode){// FIXME
//   printf("\n-print_HK start-\n");
//   switch(HK_mode){
//   case NORMAL:
//     printf("Estimation Mode                is %d .\n",pt_adc->HK_normal[0] & 0x0F);
//     printf("Control Mode                   is %d .\n",(pt_adc->HK_normal[0] & 0xF0)>> 0x04);
//     printf("ADCS Run Mode                  is %d .\n",(pt_adc->HK_normal[0] & 0x300) >> 0x08);
//     printf("ASGP4 Mode                     is %d .\n",(pt_adc->HK_normal[0] & 0xC00) >> 0x0A);
//     printf("CubeControl Signal Enabled     is %d .\n",(pt_adc->HK_normal[0] & 0x1000) >> 0x0C);
//     printf("CubeControl Motor Enabled      is %d .\n",(pt_adc->HK_normal[0] & 0x2000) >> 0x0D);
//     printf("CubeSence 1 Enabled            is %d .\n",(pt_adc->HK_normal[0] & 0x4000) >> 0x0E);
//     printf("CubeSence 2 Enabled            is %d .\n",(pt_adc->HK_normal[0] & 0x8000) >> 0x0F);
//     wait_ms(time_100ms);
//     printf("CubeWheel 1 Enabled            is %d .\n",pt_adc->HK_normal[1] & 0x01);
//     printf("CubeWheel 2 Enabled            is %d .\n",(pt_adc->HK_normal[1] & 0x02) >> 0x01);
//     printf("CubeWheel 3 Enabled            is %d .\n",(pt_adc->HK_normal[1] & 0x04) >> 0x02);
//     printf("CubeStar Enabled               is %d .\n",(pt_adc->HK_normal[1] & 0x08) >> 0x03);
//     printf("GPS Receiver Enabled           is %d .\n",(pt_adc->HK_normal[1] & 0x10) >> 0x04);
//     printf("GPS LNA Power Enabled          is %d .\n",(pt_adc->HK_normal[1] & 0x20) >> 0x05);
//     printf("Motor Driver                   is %d .\n",(pt_adc->HK_normal[1] & 0x40) >> 0x06);
//     printf("Sun is Above Local Horizon     is %d .\n",(pt_adc->HK_normal[1] & 0x80) >> 0x07);
//     wait_ms(time_100ms);
//     printf("CubeSence 1 Comm Error         is %d .\n",(pt_adc->HK_normal[1] & 0x100) >> 0x08);
//     printf("CubeSence 2 Comm Error         is %d .\n",(pt_adc->HK_normal[1] & 0x200) >> 0x09);
//     printf("CubeControl Signal Comm Error  is %d .\n",(pt_adc->HK_normal[1] & 0x400) >> 0x0A);
//     printf("CubeControl Motor Comm Error   is %d .\n",(pt_adc->HK_normal[1] & 0x800) >> 0x0B);
//     printf("CubeWheel 1 Com Error          is %d .\n",(pt_adc->HK_normal[1] & 0x1000) >> 0x0C);
//     printf("CubeWheel 2 Com Error          is %d .\n",(pt_adc->HK_normal[1] & 0x2000) >> 0x0D);
//     printf("CubeWheel 3 Com Error          is %d .\n",(pt_adc->HK_normal[1] & 0x4000) >> 0x0E);
//     printf("CubeStar Com Error             is %d .\n",(pt_adc->HK_normal[1] & 0x8000) >> 0x0F);
//     wait_ms(time_100ms);
//     printf("Est Roll Angle                 is %d .\n",pt_adc->HK_normal[5]);
//     printf("Est Pitch Angle                is %d .\n",pt_adc->HK_normal[6]);
//     printf("Est Yaw Angle                  is %d .\n",pt_adc->HK_normal[7]);
//     printf("Est q1                         is %d .\n",pt_adc->HK_normal[8]);
//     printf("Est q2                         is %d .\n",pt_adc->HK_normal[9]);
//     printf("Est q3                         is %d .\n",pt_adc->HK_normal[10]);
//     printf("Est X Angular Rate             is %d .\n",pt_adc->HK_normal[11]);
//     printf("Est Y Angular Rate             is %d .\n",pt_adc->HK_normal[12]);
//     wait_ms(time_100ms);
//     printf("Est Z Angular Rate             is %d .\n",pt_adc->HK_normal[13]);
//     printf("X Position                     is %d .\n",pt_adc->HK_normal[14]);
//     printf("Y Position                     is %d .\n",pt_adc->HK_normal[15]);
//     printf("Z Position                     is %d .\n",pt_adc->HK_normal[16]);
//     printf("X Velocity                     is %d .\n",pt_adc->HK_normal[17]);
//     printf("Y Velocity                     is %d .\n",pt_adc->HK_normal[18]);
//     printf("Z Velocity                     is %d .\n",pt_adc->HK_normal[19]);
//     printf("Lattitude                      is %d .\n",pt_adc->HK_normal[20]);
//     wait_ms(time_100ms);
//     printf("Longitude                      is %d .\n",pt_adc->HK_normal[21]);
//     printf("Altitude                       is %d .\n",pt_adc->HK_normal[22]);
//     printf("ECEF Position X                is %d .\n",pt_adc->HK_normal[23]);
//     printf("ECEF Position Y                is %d .\n",pt_adc->HK_normal[24]);
//     printf("ECEF Position Z                is %d .\n",pt_adc->HK_normal[25]);
//     printf("CubeSence 1 3V3 Current        is %d .\n",pt_adc->HK_normal[26]);
//     printf("CubeSence 1 SRAM Current       is %d .\n",pt_adc->HK_normal[27]);
//     printf("CubeSence 2 3V3 Current        is %d .\n",pt_adc->HK_normal[28]);
//     wait_ms(time_100ms);
//     printf("CubeSence 2 SRAM Current       is %d .\n",pt_adc->HK_normal[29]);
//     printf("CubeControl 3V3 Current        is %d .\n",pt_adc->HK_normal[30]);
//     printf("CubeControl 5V Current         is %d .\n",pt_adc->HK_normal[31]);
//     printf("CubeControl Vbat Current       is %d .\n",pt_adc->HK_normal[32]);
//     printf("Wheel 1 Current                is %d .\n",pt_adc->HK_normal[33]);
//     printf("Wheel 2 Current                is %d .\n",pt_adc->HK_normal[34]);
//     printf("Wheel 3 Current                is %d .\n",pt_adc->HK_normal[35]);
//     printf("CubeStar Current               is %d .\n",pt_adc->HK_normal[36]);
//     wait_ms(time_100ms);
//     printf("Magnetorquer Current           is %d .\n",pt_adc->HK_normal[37]);
//     printf("CubeStar MCU temperature       is %d .\n",pt_adc->HK_normal[38]);
//     printf("MCU temperature                is %d .\n",pt_adc->HK_normal[39]);
//     printf("Magnetometer temperature       is %d .\n",pt_adc->HK_normal[40]);
//     printf("Redu Magnetometer temperature  is %d .\n",pt_adc->HK_normal[41]);
//     printf("X-Rate-Sensor Temperature      is %d .\n",pt_adc->HK_normal[42]);
//     printf("Y-Rate-Sensor Temperature      is %d .\n",pt_adc->HK_normal[43]);
//     printf("Z-Rate-Sensor Temperature      is %d .\n",pt_adc->HK_normal[44]);

//     break;
    
//   case SEQUENCE:
    
//     break;
    
//   case HEALTH:
    
//     break;
    
//   default:
    
//     break;    
//   }
//   printf("\n-print_HK finish-\n");
  
// }

// void print_TLM(adc_t *pt_adc){
//   printf("\n-print_TLM start-\n");
//   int16_t CubeCon3V3Curr = 0;
//   int16_t CubeCon5VCurr = 0;
//   int16_t CubeConVbatCurr = 0;
//   uint8_t ADCSRunMode    = 0;
//   uint8_t isSignalEnable = 0;
//   uint8_t isMotorEnable  = 0;
  
//   int16_t TLM[64] = {0};
  
//   switch(pt_adc->ID){
//   case 132:
//     ADCSRunMode    =  pt_adc->TLM[1] & 0x03;
//     isSignalEnable = (pt_adc->TLM[1] & 0x10) == 0x10;
//     isMotorEnable  = (pt_adc->TLM[1] & 0x20) == 0x20;
//     printf("\n ADCS run mode  = %d\n", ADCSRunMode);
//     printf(" Signal Enabled = %d\n", isSignalEnable);
//     printf(" Motor Enabled  = %d\n", isMotorEnable);
    
//     break;
    
//   case 172:
//     CubeCon3V3Curr  = create_2byte_data(pt_adc->TLM[0],pt_adc->TLM[1]);
//     CubeCon5VCurr   = create_2byte_data(pt_adc->TLM[2],pt_adc->TLM[3]);
//     CubeConVbatCurr = create_2byte_data(pt_adc->TLM[4],pt_adc->TLM[5]);
//     printf("CubeControl 3V3 Current        is %d .\n",CubeCon3V3Curr);
//     printf("CubeControl 5V Current         is %d .\n",CubeCon5VCurr);
//     printf("CubeControl Vbat Current       is %d .\n",CubeConVbatCurr);
    
//     break;
    
//   case 195:
//     for(int i=0;i<19;i++){
//       TLM[i] = create_2byte_data(pt_adc->TLM[2*i],pt_adc->TLM[2*i+1]);
//       wait_ms(10);
//     }
//     printf("CubeSence 1 3V3 Current        is %d .\n",TLM[0]);
//     printf("CubeSence 1 SRAM Current       is %d .\n",TLM[1]);
//     printf("CubeSence 2 3V3 Current        is %d .\n",TLM[2]);
//     printf("CubeSence 2 SRAM Current       is %d .\n",TLM[3]);
//     printf("CubeControl 3V3 Current        is %d .\n",TLM[4]);
//     printf("CubeControl 5V Current         is %d .\n",TLM[5]);
//     printf("CubeControl Vbat Current       is %d .\n",TLM[6]);
//     printf("Wheel 1 Current                is %d .\n",TLM[7]);
//     wait_ms(time_100ms);
//     printf("Wheel 2 Current                is %d .\n",TLM[8]);
//     printf("Wheel 3 Current                is %d .\n",TLM[9]);
//     printf("CubeStar Current               is %d .\n",TLM[10]);
//     printf("Magnetorquer Current           is %d .\n",TLM[11]);
//     printf("CubeStar MCU temperature       is %d .\n",TLM[12]);
//     printf("MCU temperature                is %d .\n",TLM[13]);
//     printf("Magnetometer temperature       is %d .\n",TLM[14]);
//     printf("Redu Magnetometer temperature  is %d .\n",TLM[15]);
//     wait_ms(time_100ms);
//     printf("X-Rate-Sensor Temperature      is %d .\n",TLM[16]);
//     printf("Y-Rate-Sensor Temperature      is %d .\n",TLM[17]);
//     printf("Z-Rate-Sensor Temperature      is %d .\n",TLM[18]);
    
//     break;
    
//   default:
//     break;
//   }
//   printf("\n-print_TLM finish-\n");
// }

// //*** REVIEW!!
// void judge_eclipse(adc_t *pt_adc, bool isSunlight[][2]){
//   uint8_t CSS[10] = {0};
  
//   printf("\n-judge_eclipse start-\n");
//   /*Get CSS Data1*/
//   pt_adc->ID = 168;
//   I2CB_CubeComputer(pt_adc);
//   for(int i=0;i<6;i++){
//     CSS[i] = pt_adc->TLM[i];    
//   }
//   /*Get CSS Data2*/
//   pt_adc->ID = 169;
//   I2CB_CubeComputer(pt_adc);
//   for(int i=0;i<4;i++){
//     CSS[i+6] = pt_adc->TLM[i];    
//   }
  
//   /*Judge Eclipse each Surface*/
//   isSunlight[x][posi] = 50 < CSS[0] && 50 < CSS[1];
//   isSunlight[x][nega] = 50 < CSS[2] && 50 < CSS[3];
//   isSunlight[y][posi] = 50 < CSS[4] && 50 < CSS[5];
//   isSunlight[y][nega] = 50 < CSS[6] && 50 < CSS[7];
//   isSunlight[z][posi] = 50 < CSS[8] && 50 < CSS[9];
  
// }

// uint8_t detumbling(adc_t *pt_adc){ // NOTE: possible infinity loop(while state)
//   uint8_t process_status = 4;
//   uint8_t ControlMode = 0;
//   int omega_ini[3] = {0};
//   int omega_fin[3] = {0};
//   int omega[3] = {0};
//   bool isDetumbling[3] = {false};
//   bool TC_state = false;
  
//   printf("\n-detumbling start-\n");
  
//   /*Get Initial Angular Rates*/
// #if EM
//   pt_adc->ID = 147;
//   I2CB_CubeComputer(pt_adc);
//   n            = I2C_error_counter(n,isI2CSuccess);
//   omega_ini[x] = create_2byte_data(pt_adc->TLM[0],pt_adc->TLM[1]);
//   omega_ini[y] = create_2byte_data(pt_adc->TLM[2],pt_adc->TLM[3]);
//   omega_ini[z] = create_2byte_data(pt_adc->TLM[4],pt_adc->TLM[5]);
// #else
//   omega_ini[x] = 200;     // 200 -> 2 [deg/s]
//   omega_ini[y] = 200;
//   omega_ini[z] = 200;
// #endif
//   printf(" omega_ini[x] = %d\n",omega_ini[x]);
//   printf(" omega_ini[y] = %d\n",omega_ini[y]);
//   printf(" omega_ini[z] = %d\n",omega_ini[z]);
  
//   /*Control Mode Setting*/
//   for(int i=0;i<3;i++){
//     /*Check Control Mode*/
//     pt_adc->ID = 132;
//     I2CB_CubeComputer(pt_adc);
//     ControlMode = pt_adc->TLM[0] >> 0x04;
//     printf("\n Control mode = %d\n\n",ControlMode);
    
//     /*Set Control Mode to Detumbling*/
//     if(ControlMode != Detumbling){
//       pt_adc->ID    = SetConMode;
//       pt_adc->TC[1] = Detumbling;
//       pt_adc->TC[2] = 0x3C;     // 60[s] -> 0000 0000 0011 1100 = 0x00 + 0x3C
//       pt_adc->TC[3] = 0x00;
//       I2CB_CubeComputer(pt_adc);
//       TC_state = isTCSuccess(pt_adc);
//       if(TC_state){
//         process_status--;
//         break;
//       }
//     }else{
//       process_status--;
//       break;
//     }
//   }
  
//   /*Evaluation of Detumbling*/
//   if(process_status == 3){
//     printf(" Wait for 6 second \n\n");
//     wait_ms(6000);
//     /*Get Final Angular Rates*/
// #if EM
//     pt_adc->ID = 147;
//     I2CB_CubeComputer(pt_adc);
//     omega_fin[x] = create_2byte_data(pt_adc->TLM[0],pt_adc->TLM[1]);
//     omega_fin[y] = create_2byte_data(pt_adc->TLM[2],pt_adc->TLM[3]);
//     omega_fin[z] = create_2byte_data(pt_adc->TLM[4],pt_adc->TLM[5]);
// #else
//     omega_fin[x] = 0;     // 200 -> 2 [deg/s]
//     omega_fin[y] = 0;
//     omega_fin[z] = 0;
// #endif
//     printf(" omega_fin[x] = %d\n",omega_fin[x]);
//     printf(" omega_fin[y] = %d\n",omega_fin[y]);
//     printf(" omega_fin[z] = %d\n\n",omega_fin[z]);
    
//     isDetumbling[x] = abs(omega_fin[x]) < abs(omega_ini[x]);
//     isDetumbling[y] = abs(omega_fin[y]) < abs(omega_ini[y]);
//     isDetumbling[z] = abs(omega_fin[z]) < abs(omega_ini[z]);
//     printf(" isDetumbling[x] = %d\n",isDetumbling[x]);
//     printf(" isDetumbling[y] = %d\n",isDetumbling[y]);
//     printf(" isDetumbling[z] = %d\n",isDetumbling[z]);
    
//     /*Evaluation*/
//     if(isDetumbling[x] && isDetumbling[y] && isDetumbling[z]){
//       process_status--;
//     }
//   }
  
//   /*Y-Thomson Sequence*/
//   for(int i=0;i<3;i++){
//     /*Control Mode Setting*/
//     if(process_status == 2){
//       for(int j=0;j<3;j++){
//         /*Check Control Mode*/
//         pt_adc->ID = 132;
//         I2CB_CubeComputer(pt_adc);
//         ControlMode = pt_adc->TLM[0] >> 0x04;
//         printf("\n Control mode = %d\n\n",ControlMode);
//         /*Change Control Mode*/
//         if(ControlMode != YThomson){
//           pt_adc->ID    = SetConMode;
//           pt_adc->TC[1] = YThomson;
//           pt_adc->TC[2] = 0xA0;     // 4000[s] -> 1111 1010 0000 = 0x0F + 0xA0
//           pt_adc->TC[3] = 0x0F;
//           I2CB_CubeComputer(pt_adc);
//           TC_state = isTCSuccess(pt_adc);
//           if(TC_state){
//             process_status--;
//             break;
//           }
//         }else{
//           process_status--;
//           break;
//         }
//       }
//     }
    
//     /*Evaluation of Y-Thomson stability*/
//     if(process_status == 1){
//       while(1){
//         /*Get Angular Rates*/
// #if EM
//         pt_adc->ID = 147;
//         I2CB_CubeComputer(pt_adc);
//         omega[x] = create_2byte_data(pt_adc->TLM[0],pt_adc->TLM[1]);
//         omega[z] = create_2byte_data(pt_adc->TLM[4],pt_adc->TLM[5]);
// #else
//         omega[x] = 0;     // 200 -> 2 [deg/s]
//         omega[z] = 0;
// #endif        
//         printf(" omega[x] = %d\n",omega[x]);
//         printf(" omega[z] = %d\n",omega[z]);
//         /*Evaluation*/
//         if(abs(omega[x]) < 50 && abs(omega[z]) < 50){
//           wait_ms(3000);
//           /*Y-Thomson complete*/
//           if(abs(omega[x]) < 50 && abs(omega[z]) < 50){
//             process_status--;
//             break;
//           }
//         }
//         /*Check Control Mode*/
//         pt_adc->ID = 132;
//         I2CB_CubeComputer(pt_adc);
//         ControlMode = pt_adc->TLM[0] >> 0x04;
//         if(ControlMode != YThomson){
//           process_status++;
//           break;
//         }
//         wait_ms(10000);
//       }
//     }
//     if(process_status == 0) break;
//   }
//   printf("\n-detumbling finish-\n");
//   return process_status;
// }



// //*** sequence function
// uint8_t startup_confirmation_adc(adc_t *pt_adc){
//   uint8_t process_status = 2;
//   int16_t RunTime_sec  = 0;
//   int16_t RunTime_msec = 0;
//   uint8_t ADCSRunMode  = 0;
//   bool isSignalEnable = false;
//   bool isMotorEnable  = false;
//   bool TC_state       = false;
  
//   printf("\n-startup_confirmation start-\n");
  
//   /*Boot Status Setting*/
//   for(int i=0;i<3;i++){
//     /*Check Operation Mode*/
//     pt_adc->ID = 128;
//     I2CB_CubeComputer(pt_adc);
//     RunTime_sec  = create_2byte_data(pt_adc->TLM[4],pt_adc->TLM[5]);
//     RunTime_msec = create_2byte_data(pt_adc->TLM[6],pt_adc->TLM[7]);
//     printf("\n Node type               is %d .\n",pt_adc->TLM[0]);
//     printf(" Interface version       is %d .\n",pt_adc->TLM[1]);
//     printf(" Firmware version Major  is %d .\n",pt_adc->TLM[2]);
//     printf(" Firmware version Minor  is %d .\n",pt_adc->TLM[3]);
//     printf(" Run time(seconds)       is %d .\n",RunTime_sec);
//     printf(" Run time(milli seconds) is %d .\n\n",RunTime_msec);
    
//     if(pt_adc->TLM[0] == CubeACP){
//       process_status--;
//       break;
      
//     }else{
//       /*Check Boot Status*/
//       pt_adc->ID = 130;
//       I2CB_CubeComputer(pt_adc);
//       printf(" Program Index is %d .\n",pt_adc->TLM[0]);
//       printf(" Boot Status   is %d .\n\n",pt_adc->TLM[1]);
//       if(pt_adc->TLM[0] != InternalFlashProgram){
//         pt_adc->ID = 100;
//         pt_adc->TC[1] = InternalFlashProgram;
//         I2CB_CubeComputer(pt_adc);
//         (void)isTCSuccess(pt_adc);
//       }
//       /*Change from Bootloader to InternalFlashProgram(CubeACP)*/
//       pt_adc->ID = 101;
//       I2CB_CubeComputer(pt_adc);
//       (void)isTCSuccess(pt_adc);
//     }
//   }
  
//   /*Operation Mode Setting*/
//   if(process_status == 1){
//     for(int i=0;i<3;i++){
//       /*Check Operation Mode*/
//       pt_adc->ID = 132;
//       I2CB_CubeComputer(pt_adc);
//       ADCSRunMode    =  pt_adc->TLM[1] & 0x03;
//       isSignalEnable = (pt_adc->TLM[1] & 0x10) == 0x10;
//       isMotorEnable  = (pt_adc->TLM[1] & 0x20) == 0x20;
//       printf("\n ADCS run mode  = %d\n", ADCSRunMode);
//       printf(" Signal Enabled = %d\n", isSignalEnable);
//       printf(" Motor Enabled  = %d\n\n", isMotorEnable);
      
//       if(ADCSRunMode == Enable && isSignalEnable && isMotorEnable ){
//         /*Done!*/
//         process_status--;
//         break;
        
//       }else{
//         /*Set ADCS Run Mode*/
//         pt_adc->ID = 10;
//         pt_adc->TC[1] = Enable;
//         I2CB_CubeComputer(pt_adc);
//         TC_state = isTCSuccess(pt_adc);
//         if(TC_state){
//           /*Set CubeControl Signal/Motor*/
//           pt_adc->ID = 11;
//           pt_adc->TC[1] = CubeConSignal | CubeConMotor;
//           I2CB_CubeComputer(pt_adc);
//           TC_state = isTCSuccess(pt_adc);
//         }
//       }
//     }
//   }
//   printf("-startup_confirmation finish-\n\n");
//   return process_status;
// }
// uint8_t initial_angular_rate_estimation(adc_t *pt_adc){
//   uint8_t process_status = 2;
//   uint8_t EstimationMode = 0;
//   int omega_est[3]  = {0};
//   int omega_gyro[3] = {0};
//   int error[3]      = {0};
//   bool TC_state = false;
//   printf("\n-initial_angular_rate_estimation start-\n");
  
//   /*Estimation Mode Setting*/
//   for(int i=0;i<3;i++){
//     /*Check Estimation Mode*/
//     pt_adc->ID = 132;
//     I2CB_CubeComputer(pt_adc);
//     EstimationMode = pt_adc->TLM[0] & 0x0F;
//     printf("\n Estimation mode = %d\n\n",EstimationMode);
    
//     /*Set Estimation Mode to Magnetometr rate filter*/
//     if(EstimationMode != MTMRateFilter){
//       pt_adc->ID    = SetEstMode;
//       pt_adc->TC[1] = MTMRateFilter;
//       I2CB_CubeComputer(pt_adc);
//       TC_state = isTCSuccess(pt_adc);
//       if(TC_state){
//         process_status--;
//         break;
//       }
//     }else{
//       process_status--;
//       break;
//     }
//   }
  
//   /*Evaluation of Estimation*/
//   if(process_status == 1){
//     for(int i=0;i<3;i++){
//       /*Wait (the truth is 3 negates)*/
//       printf(" Wait for 3 second \n\n");
//       wait_ms(3000);
//       /*Get Estimation Angular Rate*/
//       pt_adc->ID = 147;
//       I2CB_CubeComputer(pt_adc);
//       omega_est[x] = create_2byte_data(pt_adc->TLM[0],pt_adc->TLM[1]);
//       omega_est[y] = create_2byte_data(pt_adc->TLM[2],pt_adc->TLM[3]);
//       omega_est[z] = create_2byte_data(pt_adc->TLM[4],pt_adc->TLM[5]);
//       printf(" omega_est[x] = %d\n",omega_est[x]);
//       printf(" omega_est[y] = %d\n",omega_est[y]);
//       printf(" omega_est[z] = %d\n\n",omega_est[z]);
//       /*Get Gyro Angular Rate*/
//       pt_adc->ID = 155;
//       I2CB_CubeComputer(pt_adc);
//       omega_gyro[x] = create_2byte_data(pt_adc->TLM[0],pt_adc->TLM[1]);
//       omega_gyro[y] = create_2byte_data(pt_adc->TLM[2],pt_adc->TLM[3]);
//       omega_gyro[z] = create_2byte_data(pt_adc->TLM[4],pt_adc->TLM[5]);
//       printf(" omega_gyro[x] = %d\n",omega_gyro[x]);
//       printf(" omega_gyro[y] = %d\n",omega_gyro[y]);
//       printf(" omega_gyro[z] = %d\n\n",omega_gyro[z]);
//       /*Error Between Estimation and Gyro*/
//       error[x] = abs(omega_gyro[x] - omega_est[x]);
//       error[z] = abs(omega_gyro[z] - omega_est[z]);
//       printf(" error[x] = %d\n",error[x]);
//       printf(" error[z] = %d\n\n",error[z]);
//       /*Evaluation*/
//       if(error[x] < 100 && error[z] < 100){
//         process_status--;
//         break;
//       }else{
//         printf(" try again\n");
//       }
//     }
//   }
//   printf("\n-initial_angular_rate_estimation finish-\n");
//   return process_status;
// }



// //*** i2c for CubeComputer
// // i2c for port a/b
// void I2CA_CubeComputer(adc_t *pt_adc){
//   pt_adc->TC[0] = pt_adc->ID;
//   uint8_t TC_WORDS = 0, TLM_WORDS = 0;
  
//   /* Telecommand */
//   if (0 < pt_adc->ID && pt_adc->ID < 128){
//     TC_WORDS = get_TC_byte(pt_adc->ID);
//     if(TC_WORDS != 0){
//       I2CA_TC(pt_adc->TC,TC_WORDS);
//     }
    
//   /* Telemetry */
//   }else if (128 <= pt_adc->ID && pt_adc->ID <= 255){
//     TLM_WORDS = get_TLM_byte(pt_adc->ID);      // Get RX data size
//     if(TLM_WORDS != 0){
//       I2CA_TLM(pt_adc->TLM,pt_adc->TC,TLM_WORDS);   // I2C communication
//     }
    
//   /* Error */
//   }else{
//     printf("\n- Error ID -\n\n");
//   }
// }
// void I2CB_CubeComputer(adc_t *pt_adc){
//   pt_adc->TC[0] = pt_adc->ID;
//   uint8_t TC_WORDS, TLM_WORDS;
  
//   /* Telecommand */
//   if (0 < pt_adc->ID && pt_adc->ID < 128){
//     TC_WORDS = get_TC_byte(pt_adc->ID);
//     if(TC_WORDS != 0){
//       I2CB_TC(pt_adc->TC,TC_WORDS);
//     }
    
//   /* Telemetry */
//   }else if (128 <= pt_adc->ID && pt_adc->ID <= 255){
//     TLM_WORDS = get_TLM_byte(pt_adc->ID);      // Get RX data size
//     if(TLM_WORDS != 0){  
//       I2CB_TLM(pt_adc->TLM,pt_adc->TC,TLM_WORDS);   // I2C communication
//     }
    
//   /* Error */
//   }else{
//     printf("\nNo ID\n\n");
//   }
//   wait_ms(1);
// }


// // set size of Tx/Rx data
// uint8_t get_TC_byte(int ID){
//   uint8_t TC_WORDS = 0;
//   if(ID == 6 || ID == 101){
//     TC_WORDS = 1;
//   }else if(ID == 10 || ID == 14 || ID == 100 || ID == 102){
//     TC_WORDS = 2;
//   }else if(ID == 11 || ID == 13){
//     TC_WORDS = 4;
//   }else if(ID == 16 || ID == 17){
//     TC_WORDS = 7;
//   }else if(ID == 45){
//     TC_WORDS = 64;
//   }else{
//     TC_WORDS = 0;
//     printf("\nPlease set new TC byte(ID = %d)\n\n",ID);
//   }
//   return TC_WORDS;
// }
// uint8_t get_TLM_byte(int ID){
//   uint8_t TLM_WORDS = 0;
//   if(ID == 191){
//     TLM_WORDS = 72;
//   }else if(ID == 190){
//     TLM_WORDS = 54;    
//   }else if(ID == 195){
//     TLM_WORDS = 38;
//   }else if(ID == 128 || ID == 196 || ID == 232){
//     TLM_WORDS = 8;
//   }else if(ID == 129 || ID == 132 || ID == 140 || ID == 141 || ID == 142 || ID == 143 || ID == 144 || ID == 146 || ID == 147 || ID == 148 || ID == 149){
//     TLM_WORDS = 6;
//   }else if(ID == 150 || ID == 151 || ID == 152 || ID == 153 || ID == 155 || ID == 156 || ID == 157 || ID == 158 || ID == 168 || ID == 169){
//     TLM_WORDS = 6;
//   }else if(ID == 170 || ID == 171 || ID == 172 || ID == 173 || ID == 174 || ID == 175 || ID == 198){
//     TLM_WORDS = 6;
//   }else if(ID == 215 || ID == 216 || ID == 218 || ID == 219 || ID == 224 || ID == 232){
//     TLM_WORDS = 6;
//   }else if(ID == 240){
//     TLM_WORDS = 4;
//   }else if(ID == 197 || ID == 220){
//     TLM_WORDS = 3;
//   }else if(ID == 130){
//     TLM_WORDS = 2;
//   }else if(ID == 135){
//     TLM_WORDS = 1;
//   }else{
//     TLM_WORDS = 0;
//     printf("\nPlease set new TLM byte(ID = %d)\n\n",ID);
//   }
//   return TLM_WORDS;
// }

// // set TC data
// void set_TC_data(adc_t *pt_adc){
//   int tmp = 0;
  
//   pt_adc->TC[0] = pt_adc->ID;
  
//   switch(pt_adc->ID){
//   case 3:
//     printf("-Reset Boot Register-\n");
//   case 10:
//     printf("-Set ADCS Run Mode-\n");
//     printf(" 0 -> Off\n");
//     printf(" 1 -> Enable\n");
//     printf(" 2 -> Triggered\n");
//     printf(" 3 -> Simulation\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[1] = tmp;
    
//     break;
//   case 14:
//     printf("-Set Attitude Estimation Mode-\n");
//     printf(" 0 -> No attitude estimation\n");
//     printf(" 1 -> MEMS rate sensing\n");
//     printf(" 2 -> Magnetometer rate filter\n");
//     printf(" 3 -> Magnetometer rate filter with pitch estimation\n");
//     printf(" 4 -> Magnetometer and Fine-sun TRIAD algorithm\n");
//     printf(" 5 -> Full-state EKF\n");
//     printf(" 6 -> MEMS gyro EKF\n");
//     printf(" 7 -> User Coded Estimation Mode\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[1] = tmp;
//     break;
    
//   case 100:
//     pt_adc->TC[1] = 1;
//     break;
    
//   case 102:
//     pt_adc->TC[1] = 1;
//     break;
    
//   case 11:
//     printf("Please select which program to turn on\n");
//     printf(" [00 00 00 01] = 1  -> Signal Power On!\n");
//     printf(" [00 00 01 00] = 4  -> Motor Power  On!\n");
//     printf(" [00 01 00 00] = 16 -> Cube Sens1   On!\n");
//     printf(" [01 00 00 00] = 64 -> Cube Sens2   On!\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[1] = tmp;
//     printf("\nPlease select which program to turn on\n");
//     printf(" [00 00 00 01] = 1  -> Cube Star    On!\n");
//     printf(" [00 00 01 00] = 4  -> Cube Wheel_1 On!\n");
//     printf(" [00 01 00 00] = 16 -> Cube Wheel_2 On!\n");
//     printf(" [01 00 00 00] = 64 -> Cube Wheel_3 On!\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[2] = tmp;
//     printf("\nPlease select which program to turn on\n");
//     printf(" [00 00 00 01] = 1  -> Motor Power  On!\n");
//     printf(" [00 00 01 00] = 4  -> GPS Power    On!\n");
//     scanf("%d",&tmp);
//     break;
    
//   case 13:
//     printf("-Set Attitude Control Mode-\n");
//     printf("  0 -> No control\n");
//     printf("  1 -> Detumbling control\n");
//     printf("  2 -> Y-Thomson spin\n");
//     printf("  3 -> Y-Wheel momentum stabilized - Initial Pitch Acquisition\n");
//     printf("  4 -> Y-Wheel momentum stabilized - Steady State\n");
//     printf("  5 -> XYZ-Wheel control\n");
//     printf("  6 -> Rwheel sun tracking control\n");
//     wait_ms(time_100ms);
//     printf("  7 -> Rwheel target tracking control\n");
//     printf("  8 -> Very Fast-spin Detumbling control\n");
//     printf("  9 -> Fast-spin Detumbling control\n");
//     printf(" 10 -> User Specific Control Mode 1\n");
//     printf(" 11 -> User Specific Control Mode 2\n");
//     printf(" 12 -> Stop R-wheels\n");
//     printf(" 13 -> User Coded Control Mode\n");
//     printf(" 14 -> Sun-tracking yaw- or roll-only wheel control mode\n");
//     wait_ms(time_100ms);
//     printf(" 15 -> Target-tracking yaw-only wheel control Mode\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[1] = tmp;
//     printf("\nPlease set the Timeout time (0 ~ 65,535(0xFFFF) [s])\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[2] = 0xFF & tmp;
//     pt_adc->TC[3] = tmp >> 8;
//     break;
    
//   case 16:
//     printf("\nPlease enter Madnetorquer_x duty cycle in the range 0 ~ 1000\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[1] = 0xFF & tmp;
//     pt_adc->TC[2] = tmp >> 8;
//     printf("\nPlease enter Madnetorquer_y duty cycle in the range 0 ~ 1000\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[3] = 0xFF & tmp;
//     pt_adc->TC[4] = tmp >> 8;
//     printf("\nPlease enter Madnetorquer_z duty cycle in the range 0 ~ 1000\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[5] = 0xFF & tmp;
//     pt_adc->TC[6] = tmp >> 8;
//     break;
    
//   case 17:
//     printf("\nPlease enter RW_x speed in the range -6000 ~ 6000\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[1] = 0xFF & tmp;
//     pt_adc->TC[2] = tmp >> 8;
//     printf("\nPlease enter RW_y speed in the range -6000 ~ 6000\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[3] = 0xFF & tmp;
//     pt_adc->TC[4] = tmp >> 8;
//     printf("\nPlease enter RW_z speed in the range -6000 ~ 6000\n");
//     scanf("%d",&tmp);
//     pt_adc->TC[5] = 0xFF & tmp;
//     pt_adc->TC[6] = tmp >> 8;
//     break;
    
//   default:
//     if(pt_adc->ID < 128){
//       printf("\nPlease set new TC data(ID = %d)\n\n",pt_adc->ID);
//     }
//     break; 
//   }
  
// }



// //*** bit shift
// int32_t create_4byte_data(uint8_t a,uint8_t b,uint8_t c,uint8_t d){                 // 32 bit display (LSB,-,-,MSB) 
//   int16_t tmp16ab;
//   int16_t tmp16cd;
//   int32_t tmp32;
  
//   tmp16ab = b << 0x8;
//   tmp16ab = tmp16ab | a;
  
//   tmp16cd = d << 0x8;
//   tmp16cd = tmp16cd | c;
  
//   tmp32   = tmp16cd << 0x10;
//   tmp32   = tmp32 | tmp16ab;
//   return tmp32;
// }
// int16_t create_2byte_data(uint8_t a,uint8_t b){                                     // 16 bit display (LSB , MSB)
//   int16_t tmp;
  
//   tmp = b << 0x8;
//   tmp = tmp | a;
//   return tmp;
// }
// void devide_into_4bit_data(uint8_t a,int8_t *b){
//   b[0] = a & 0xF;
//   b[1] = a >> 0x4;
// }
// void devide_into_2bit_data(uint8_t a,int8_t *b){
//   b[0] = a & 0x3;
//   b[1] = a >> 0x2  & 0x3;
//   b[2] = a >> 0x4  & 0x3;
//   b[3] = a >> 0x6  & 0x3;
// }
// void devide_into_1bit_data(uint8_t a,int8_t *b){
//   b[0] = a & 1;
//   b[1] = a >> 0x1  & 0x1;
//   b[2] = a >> 0x2  & 0x1;
//   b[3] = a >> 0x3  & 0x1;
//   b[4] = a >> 0x4  & 0x1;    
//   b[5] = a >> 0x5  & 0x1;
//   b[6] = a >> 0x6  & 0x1;    
//   b[7] = a >> 0x7  & 0x1;
// }



// //*** Initialize adc_t
// void init_adct(adc_t *pt_adc){
  
//   pt_adc->ID = 0;
//   pt_adc->STATUS = 0;
//   pt_adc->flag = 0;
//   memset(pt_adc->TLM,0,sizeof pt_adc->TLM);
//   memset(pt_adc->TC,0,sizeof pt_adc->TC);
//   memset(pt_adc->HK_normal,3,sizeof pt_adc->HK_normal);
  
// }



// //*** useful function
// bool isTCSuccess(adc_t *pt_adc){
//   bool pc = false;
//   wait_ms(time_1s);  
//   printf("Check the prosess ");
//   for(int p=0;p<20;p++){
//     pt_adc->ID = 240;
//     I2CB_CubeComputer(pt_adc);
//     wait_ms(time_100ms);
//     if(pt_adc->TLM[1] == 0x01){
//       printf(" TC ID = %d Done!\n", pt_adc->TLM[0]);
//       pc = true;
//       break;
//     }
//     printf(".");
//   }
  
//   if(!pc){
//     switch(pt_adc->TLM[2]){
//     case 0:
//       printf(" Try again.\n");
//       break;
//     case 1:
//       printf(" Invalid TC.\n");
//       break;
//     case 2:
//       printf(" Incorrect length.\n");
//       break;
//     case 3:
//       printf(" Incorrect parameter.\n");
//       break;
//     case 4:
//       printf(" CRC check failed.\n");
//       break;
//     default:
//       printf(" Try again.\n");
//       break;
//     }
//   }
//   wait_ms(time_100ms);  
//   return pc;
// }
