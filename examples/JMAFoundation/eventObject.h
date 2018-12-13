
#include <JMAFoundation.h>

class eventObject
{
public:
	// eventObject(arguments);
	// ~eventObject();
	char name[17] = "JungleMetal Software.";
	char info[11] = "2015.10.30";
	char work[16] = "This is an Event";

	void callEvent1();
	void callEvent2();
	void callEvent3();

	JMAEvent onEventTest1 = JMA_EVENT_NONE;
	JMAEvent onEventTest2 = JMA_EVENT_NONE;
	JMAEvent onEventTest3 = JMA_EVENT_NONE;
};
