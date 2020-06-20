
#include "debug.h"

void main(void)
{
	DEBUG_init();
	DEBUG_MESSAGE("Init");

	DEBUG_MESSAGE("Setup");
	DEBUG_setup();

	DEBUG_MESSAGE("Main Loop");
	while (1)
	{
		DEBUG_task();

	}


	DEBUG_MESSAGE("Exit");


}