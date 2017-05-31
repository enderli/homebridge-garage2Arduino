/*****************************************************************************
* File    : GC_eeprom.h
* Author  : 惜枫醉
* Date    : 2017/05/22
* Brief   : 
*
* Copyright (c) 2000-2020 惜枫醉 All Rights Reserved.
* Remarks :修改日志
******************************************************************************/
#ifndef _GC_EEPROM_H_
#define _GC_EEPROM_H_

/*****************************************************************************
*                               头文件引用                                   *
******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif


/*****************************************************************************
*                                常量定义
******************************************************************************/


/*****************************************************************************
*                                 宏定义
******************************************************************************/



#define EEPROM_VERSION 0xF1  // 用于区分版本，以防后续版本变化
#define EEPROM_USEDSIZE 16

/*****************************************************************************
*                              数据类型定义
******************************************************************************/
enum
{
    EEPROM_INFO =0x00,
    EEPROM_UPTIME,
    EEPROM_DOWNTIME,
    EEPROM_SRVIPSEG0,
    EEPROM_SRVIPSEG1,
    EEPROM_SRVIPSEG2,
    EEPROM_SRVIPSEG3,
    EEPROM_DEVID
}EEPROM_ADDR;


/*****************************************************************************
*                                变量声明
******************************************************************************/


/*****************************************************************************
*                                函数声明
******************************************************************************/


#ifdef __cplusplus
}
#endif
#endif


