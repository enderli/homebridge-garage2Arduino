/*****************************************************************************
* File    : GC_timer.h
* Author  : 惜枫醉
* Date    : 2017/04/06
* Brief   : 定时器，每个部分都可以申请调用一个定时任务，切记不能在定时任务里做非常繁杂的事件及死循环
*
* Copyright (c) 2000-2020 惜枫醉 All Rights Reserved.
* Remarks :修改日志
******************************************************************************/
#ifndef _GC_TIMER_H_
#define _GC_TIMER_H_

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
#define TIMER_MAX_JOB 6

/*****************************************************************************
*                              数据类型定义
******************************************************************************/

typedef struct TIMER_JobContext
{
    unsigned char isRegitered;
    unsigned int jobGapMs;
    void (*event)(void);
};


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


