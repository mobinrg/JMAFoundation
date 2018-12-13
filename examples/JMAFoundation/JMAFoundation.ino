
#include <JMAFoundation.h>
#include "eventObject.h"

eventObject myEventObj;

void setup() {
	Serial.begin(9600);

	// myEventObj.onEventTest1 = onEvent1;
	myEventObj.onEventTest2 = onEvent2;
	myEventObj.onEventTest3 = onEvent3;
}


void loop() {

	myEventObj.callEvent1();
	delay(1000);

	myEventObj.callEvent2();
	delay(1000);

	myEventObj.callEvent3();
	delay(1000);
}



void onEvent1(void *sender)
{
	//Cast to the desired object instance
	//强制转换为需要的对象实例
	eventObject *eObj = (eventObject *)sender;
	Serial.println(eObj->name);
}

void onEvent2(void *sender)
{
	//Cast to the desired object instance
	//强制转换为需要的对象实例
	eventObject *eObj = (eventObject *)sender;
	Serial.println(eObj->info);
}

void onEvent3(void *sender)
{
	//Cast to the desired object instance
	//强制转换为需要的对象实例
	eventObject *eObj = (eventObject *)sender;
	Serial.println(eObj->work);
}
