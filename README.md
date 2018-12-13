# JMAFoundation
A library that provide event response for Arduino.

### JMATypes.h
	Data type definition. Define NULL, null Two basic types. Their values are 0x00.

### JMAEvent.h
	Event callback function type definition

	* _JMA_EVENT_NONE_
	Empty event


## Event callback function type:

	* _JMAEvent_
		Pass the callback function of the event generation object, For example: anEnvFunc(*sender);


	* _JMAEventWithoutSender_
		A function that does not pass an event generation object. For example: anEnvFunc();


	* _hasRespondEvent(event)_
		Determine if the event response callback function is set.


-----------------------------------------------------------------------

# JMAFoundation

为 Arduino 提供事件响应机制的库。



### JMATypes.h
	数据类型定义。定义 NULL, null 两个基本类型。它们的值为 0x00。

### JMAEvent.h
	事件回调函数类型定义

	* _JMA_EVENT_NONE_
		空事件


## 事件回调函数类型：

	* _JMAEvent_
		传递事件产生对象的回调函数，例如：anEnvFunc(*sender);
	

	* _JMAEventWithoutSender_
		传递事件产生对象的回调函数，例如：anEnvFunc();


	* _hasRespondEvent(event)_
		判断是否设置了事件响应回调函数。
	
