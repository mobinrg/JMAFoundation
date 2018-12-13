# JMAFoundation
A library that provide event response for Arduino.

### JMATypes.h
	Data type definition. Define NULL, null Two basic types. Their values are 0x00.

### JMAEvent.h
	Event callback function type definition

	* JMA_EVENT_NONE
	Empty event


## Event callback function type:

	* JMAEvent
		A callback function. At same time send the callback function of the event generation object, For example: anEnvFunc(*sender);


	* JMAEventWithoutSender
		A callback function that does not send an event generation object. For example: anEnvFunc();


	* hasRespondEvent(event)
		Determine if the event response callback function is set.


-----------------------------------------------------------------------

# JMAFoundation

为 Arduino 提供事件响应机制的库。



### JMATypes.h
	数据类型定义。定义 NULL, null 两个基本类型。它们的值为 0x00。

### JMAEvent.h
	事件回调函数类型定义

	* JMA_EVENT_NONE
		空事件


## 事件回调函数类型：

	* JMAEvent
		传递事件产生对象的回调函数，例如：anEnvFunc(*sender);
	

	* JMAEventWithoutSender
		不传递事件产生对象的回调函数，例如：anEnvFunc();


	* hasRespondEvent(event)
		判断是否设置了事件响应回调函数。
	
