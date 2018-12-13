
#include "eventObject.h"

void eventObject::callEvent1()
{
	if (hasRespondEvent(onEventTest1))
		onEventTest1(this);
}

void eventObject::callEvent2()
{
	if (JMA_EVENT_NONE != onEventTest2)
		onEventTest2(this);
}

void eventObject::callEvent3()
{
	if (JMA_EVENT_NONE != onEventTest3)
		onEventTest3(this);
}