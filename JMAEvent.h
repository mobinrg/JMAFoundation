

#ifndef __jma_event_h
#define __jma_event_h

#include <JMATypes.h>

/***************************************
 *
 * Event Response 
 *
 * 建立事件响应机制的基础代码
 *
 */

/**
 * Empty event
 * 空事件
 */
#define JMA_EVENT_NONE	NULL

/*
 * JMAEvent
 *
 * Define standard events (pointer event_sender)
 * 定义标准的事件（事件发送者指针）
 */
typedef void(*JMAEvent)(void*);

/**
 * JMAEventWithoutSender
 * 
 * Define standard events, no sender pointer
 * 定义标准的事件，没有发送者指针
 */
typedef void(*JMAEventWithoutSender)();

/**
 * Determine if an event response is set
 * 判断是否设置了事件响应
 */
#define hasRespondEvent(event) (event != JMA_EVENT_NONE ? true : false)

#endif
