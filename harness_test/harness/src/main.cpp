
#include "debug.h"
#include "registry.h"
#include "scheduler.h"

void main(void)
{
	DEBUG_MESSAGE("Main start");

	cRegistry* Registry   = new cRegistry;
	cScheduler* Scheduler = new cScheduler;

	DEBUG_init();
	DEBUG_MESSAGE("Init");
	Registry->Init("Registry");
	Scheduler->Init("Scheduler");

	DEBUG_MESSAGE("Setup");
	DEBUG_setup();
	Registry->Setup( 0 );

	Scheduler->Setup( 0 );
	Registry->Add( Scheduler );

	DEBUG_MESSAGE("Main Loop");

	Registry->Dump();

	while (1)
	{
		DEBUG_task();
		Scheduler->Tick();

	}


	DEBUG_MESSAGE("Exit");


}