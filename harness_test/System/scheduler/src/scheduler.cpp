
#include "debug.h"
#include "scheduler.h"

cScheduler::cScheduler( void )
{
	 DEBUG_MESSAGE("cScheduler");
	 Type = CSCHEDULER_CLASS;

	 local_time = 0ll;
}

int cScheduler::Add(cRoot* item, int offset)
{
	return 0;
}

void cScheduler::Tick(void)
{
	local_time++;

}

void cScheduler::Dump( void )
{
	int i = 0;

	printf("---------------------------------------\n");
	printf("index - Name                             When\n");

	printf("---------------------------------------\n");
}
