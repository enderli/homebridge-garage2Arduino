/*****************************************************************************
* File    : GC_oled.h
* Author  : 惜枫醉
* Date    : 2017/04/06
* Brief   : oled头文件
*
* Copyright (c) 2000-2020 惜枫醉 All Rights Reserved.
* Remarks :修改日志
******************************************************************************/
#ifndef _GC_OLED_H_
#define _GC_OLED_H_

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
#define HW_IIC 0
#define OLED_CMD        0
#define OLED_DATA       1
#define OLED_DOT_W  1 //white
#define OLED_DOT_B  0 //black


/*****************************************************************************
*                              数据类型定义
******************************************************************************/


/*****************************************************************************
*                                变量声明
******************************************************************************/


/*****************************************************************************
*                                函数声明
******************************************************************************/
Uint8 OLED_fastDraw_F(Uint8 startCow,Uint8 startRow,Uint8 *text,
                        Uint8 isColorReverse = 0, Uint8 isFontX2 = 0, Uint8 chrCnt=255);

Uint8 OLED_fastDraw(Uint8 startCow,Uint8 startRow,Uint8 *text,
                        Uint8 isColorReverse = 0, Uint8 isFontX2 = 0, Uint8 chrCnt=255);

#ifdef __cplusplus
}
#endif
#endif


