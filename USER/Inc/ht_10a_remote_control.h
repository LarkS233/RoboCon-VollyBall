#ifndef HT_10A_REMOTE_CONTROL_H
#define HT_10A_REMOTE_CONTROL_H

#include "main.h"
#include "bsp_rc.h"

#define SBUS_BUFLEN 25//SBUS协议数据缓存25bit
#define SBUS_HUART       huart1//SBUS协议使用的UART1

#define SBUS_RX_BUF_NUM 50u
#define RC_FRAME_LENGTH 25u//SBUS协议数据缓存25bit

typedef struct 
{

        uint16_t ch[8];//通道数据

}SBUS_ctrl_t;

extern void sbus_remote_control_init(void);

extern const SBUS_ctrl_t *get_sbus_remote_control_point(void);

extern uint8_t   sbus_buf[SBUS_BUFLEN];
void USART1_IRQHandlerCallBack(void);

#endif