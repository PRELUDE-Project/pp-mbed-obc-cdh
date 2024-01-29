#include "mbed.h"
#include "pp_cdh.h"
#include "pp_adc.h"

void wdt_init(cdh_t *pt_cdh){
    pt_cdh->wdt_cnt       = 0;
}
void cdh_initialize(cdh_t *pt_cdh){
    pt_cdh->sequence_flag = 0x00;           // need to fix to read flash memory
    pt_cdh->error_flag    = STEADY_STATE;
    pt_cdh->cmd           = 0x0000;
    pt_cdh->cmd_ack       = 0x00;
}

void cdh_single_cmd(cdh_t *pt_cdh, adc_t *pt_adc){
    pt_cdh->cmd_ack = 0xEE;
    switch(pt_cdh->cmd){
        /**
        * single command for Main CDH
        */
        case SUB_CDH_RESET:
            break;
        case EPS_POWER_ON:
            // EPSのラッチングリレースイッチをオンにする．
            pt_cdh->cmd_ack = 0xEF;
            break;
        case EPS_POWER_OFF:
            break;
        case EPS_HEALTH_CHECK:
            pt_cdh->cmd_ack = 0xEF;
            break;
        case ADC_HEALTH_CHECK:
            pt_cdh->cmd_ack = 0xEF;
            break;
        case COM_HEALTH_CHECK:
            // SDのHealth chechも行う
            break;
        case GET_EPS_HK:
            break;
        case GET_ADC_HK:
            break;
        case GET_COM_HK:
            break;
        case GET_GNSS_HK:
            break;
        case GET_MIS_HK:
            break;
        case GET_DEP_SW_STATE_P:
            break;
        case GET_DEP_SW_STATE_N:
            break;
        case KILL_SW_ON_CDH:
            break;
        case KILL_SW_OFF_CDH:
            break;
        /**
        * single command for Sub CDH
        */
        case MAIN_CDH_RESET:
            break;
        /**
        * single command for EPS
        */
        case ADC_POWER_ON:
            pt_cdh->cmd_ack = 0xEF;
            break;
        case ADC_POWER_OFF:
            break;
        case COM_POWER_ON:
            break;
        case COM_POWER_OFF:
            break;
        case TRX_POWER_ON:
            break;
        case TRX_POWER_OFF:
            break;
        case GNSS_POWER_ON:
            break;
        case GNSS_POWER_OFF:
            break;
        case HRM_HEAT_ON:
            break;
        case HRM_HEAT_OFF:
            break;
        case CAM_POWER_ON:
            break;
        case CAM_POWER_OFF:
            break;
        case HEATER_1_POWER_ON:
            break;
        case HEATER_1_POWER_OFF:
            break;
        case HEATER_2_POWER_ON:
            break;
        case HEATER_2_POWER_OFF:
            break;
        case HEATER_3_POWER_ON:
            break;
        case HEATER_3_POWER_OFF:
            break;
        case KILL_SW_ON_EPS:
            break;
        case KILL_SW_OFF_EPS:
            break;
        /**
        * single command for ADC
        */
        case ADC_ANGULAR_RATE_EST:
            pt_cdh->cmd_ack = 0xEF;
            break;
        case ADC_DETUMBLING:
            break;
        /**
        * single command for COM
        */
        case SD_1_HEALTH_CHECK:
            pt_cdh->cmd_ack = 0xEF;
            break;
        case SD_2_HEALTH_CHECK:
            break;
        case TRX_HEALTH_CHECK:
            pt_cdh->cmd_ack = 0xEF;
            break;
        case CAM_HEALTH_CHECK:
            break;
    }
    if(pt_cdh->cmd_ack == 0xEE){
        pt_cdh->error_flag = ERROR_STATE;
    }
    pt_cdh->cmd = 0x00;
}

void auto_sequence(cdh_t *pt_cdh, adc_t *pt_adc){
    switch(pt_cdh->sequence_flag){
        case 0:
            // EPS電源投入
            printf(">> EPS Power ON Start!\r\n");
            pt_cdh->cmd = EPS_POWER_ON;
            cdh_single_cmd(pt_cdh, pt_adc);         // EPS用ラッチングリレースイッチをONにする．
            printf(">>>> pt_cdh->cmd_ack = 0x%x\r\n", pt_cdh->cmd_ack);
            wait(1);                              // 電源投入後，安定するまでwait．待機時間は検証で確認！
            for(uint8_t cnt = 0; cnt < 5; cnt++){
                pt_cdh->cmd = EPS_HEALTH_CHECK;
                cdh_single_cmd(pt_cdh, pt_adc); // EPSにSPI通信を使用してヘルスチェック用コマンドを送信．EPSからackとして0xEFの返答が来ればOK．
                if(pt_cdh->cmd_ack == 0xEF){
                    pt_cdh->sequence_flag = 1;
                    break;
                }
                if(cnt == 4){
                    pt_cdh->error_flag = ERROR_STATE;
                }
            }
            break;
        case 1:
            // // ADC電源投入
            pt_cdh->cmd = ADC_POWER_ON;
            cdh_single_cmd(pt_cdh,pt_adc);        // ADC用ラッチングリレースイッチをONにするようEPSにコマンドを送信．
            if(pt_cdh->cmd_ack == 0xEE){
                break;
            }
            // wait_ms(10000);                          // 電源投入後，CubeADCS起動のために10[s]待機
            for(uint8_t cnt = 0; cnt < 5; cnt++){
                pt_cdh->cmd = ADC_HEALTH_CHECK;
                cdh_single_cmd(pt_cdh, pt_adc); // EPSにSPI通信を使用してヘルスチェック用コマンドを送信．EPSからackとして0xEFの返答が来ればOK．
                if(pt_cdh->cmd_ack == 0xEF){
                    pt_cdh->sequence_flag = 2;
                    break;
                }
                if(cnt == 4){
                    pt_cdh->error_flag = ERROR_STATE;
                    break;
                }
            }
            break;

        case 2:
            // COM電源投入
            pt_cdh->cmd = COM_POWER_ON;
            cdh_single_cmd(pt_cdh,pt_adc);         // COM用ラッチングリレースイッチをONにするようEPSにコマンドを送信．
            if(pt_cdh->cmd_ack == 0xEE){
                pt_cdh->error_flag = ERROR_STATE;
                break;
            }
            // wait_ms(10000);                              // 電源投入後，安定するまでwait．待機時間は検証で確認！
            for(uint8_t cnt = 0; cnt < 5; cnt++){
                pt_cdh->cmd = COM_HEALTH_CHECK;
                cdh_single_cmd(pt_cdh,pt_adc); // EPSにSPI通信を使用してヘルスチェック用コマンドを送信．EPSからackとして0xEFの返答が来ればOK．
                if(pt_cdh->cmd_ack == 0xEF){
                    pt_cdh->sequence_flag = 3;
                    break;
                }
            }
            pt_cdh->error_flag = ERROR_STATE;
            break;

        case 3:
            // Detumbling制御開始
            // initial angular rate estimation
            pt_cdh->cmd = ADC_ANGULAR_RATE_EST; 
            cdh_single_cmd(pt_cdh,pt_adc);
            pt_cdh->cmd = ADC_DETUMBLING; 
            cdh_single_cmd(pt_cdh,pt_adc);
            // // process_status = detumbling(adc);  
            // if(process_status == 0){ 
            //     pt_cdh->sequence_flag = 4;
            //     break;
            // }else{
            //     pt_cdh->error_flag = ERROR_STATE; 
            //     break;
            // }
            // break;
        case 4:
            // 通信機電源投入
            pt_cdh->cmd = TRX_POWER_ON; 
            cdh_single_cmd(pt_cdh,pt_adc);
            // wait(7);
            pt_cdh->cmd = TRX_HEALTH_CHECK; 
            cdh_single_cmd(pt_cdh,pt_adc);
            break;
        case 5:
            // パネル展開
            pt_cdh->cmd = HRM_HEAT_ON; 
            cdh_single_cmd(pt_cdh,pt_adc);
            pt_cdh->cmd = GET_DEP_SW_STATE_P;
            cdh_single_cmd(pt_cdh,pt_adc);
            pt_cdh->cmd = GET_DEP_SW_STATE_N;
            cdh_single_cmd(pt_cdh,pt_adc);
            break;
    }
}

void error_sequence(cdh_t *pt_cdh, adc_t *pt_adc){
    
}