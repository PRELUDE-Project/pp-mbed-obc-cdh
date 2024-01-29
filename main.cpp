#include "mbed.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pp_cmd_def.h"
#include "pp_cdh.h"
#include "pp_adc.h"

Ticker sat_time;
cdh_t cdh;
adc_t adc;
void cdh_IRQHandler(){
    cdh.wdt_cnt++;
    printf(">> Timer interrupt!\r\n");
    printf(">>>> cdh.sequence_flag  = 0x%x\r\n", cdh.sequence_flag);
    printf(">>>> cdh.error_flag     = 0x%x\r\n", cdh.error_flag);
    printf(">>>> cdh.wdt_cnt        = 0x%x\r\n", cdh.wdt_cnt);
    printf("\r\n");
}

int main(void) {
    printf(">> Main CDH Starts!\r\n");
    
    cdh_initialize(&cdh);   // 電源が投入された時点で，MainCDHの構造体の初期化を行う．不揮発メモリよりステータスを読みこむ．
    wdt_init(&cdh);
    printf(">> Main CDH Initialize Done!\r\n");
    printf(">>>> cdh.sequence_flag  = 0x%x\r\n", cdh.sequence_flag);
    printf(">>>> cdh.error_flag     = 0x%x\r\n", cdh.error_flag);
    printf(">>>> cdh.wdt_cnt        = 0x%x\r\n", cdh.wdt_cnt);
    printf("\r\n");
    printf(">> Main CDH in Progress!\r\n");
    sat_time.attach(&cdh_IRQHandler, 1.0);
    while(1){
        switch(cdh.error_flag){
            case STEADY_STATE:
                if(cdh.sequence_flag < 6){
                    auto_sequence(&cdh,&adc);
                }else if(cdh.cmd != 0x0000){
                    cdh_single_cmd(&cdh,&adc);
                }
                break;
            case ERROR_STATE:
                printf(">> ERROR STATE NOW!!!\r\n");
                error_sequence(&cdh,&adc);
                break;
        }
        wait(1);
    }
}
