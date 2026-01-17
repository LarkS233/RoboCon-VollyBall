#ifndef HT_10A_REMOTE_CONTROL_H
#define HT_10A_REMOTE_CONTROL_H

#include "main.h"
#include "bsp_rc.h"

#define SBUS_BUFLEN 25//SBUS协议数据缓存25bit
#define SBUS_HUART       huart1//SBUS协议使用的UART1

#define SBUS_RX_BUF_NUM 50u
#define RC_FRAME_LENGTH 25u//SBUS协议数据缓存25bit

#define RC_CH_VALUE_MIN         ((uint16_t)1000)
#define RC_CH_VALUE_OFFSET      ((uint16_t)1500)
#define RC_CH_VALUE_MAX         ((uint16_t)2000)


typedef struct
{
    struct
    {
        uint16_t ch[8];//通道数据
    }sbus_rc;


}SBUS_ctrl_t;

#endif