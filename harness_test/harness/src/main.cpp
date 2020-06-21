
#include "debug.h"
#include "registry.h"

void main(void)
{
	DEBUG_MESSAGE("Main start");

	cRegistry* Registry = new cRegistry;

	DEBUG_init();
	DEBUG_MESSAGE("Init");
	Registry->Init( "Registry" );

	DEBUG_MESSAGE("Setup");
	DEBUG_setup();
	Registry->Setup( 0 );

	DEBUG_MESSAGE("Main Loop");

	Registry->Dump();

	while (1)
	{
		DEBUG_task();

	}


	DEBUG_MESSAGE("Exit");


}