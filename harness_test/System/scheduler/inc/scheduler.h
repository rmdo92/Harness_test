

#ifndef __SYSTEM_SCHEDULER_REGISTRY_H__
#define __SYSTEM_SCHEDULER_REGISTRY_H__

#include <list>
#include "root.h"

class cScheduler : public cRoot
{
public:
	cScheduler(void);

	int Add(cRoot *item, int offset);

	void Dump(void);

	void Tick(void);

private:
	unsigned long long local_time;

};

#endif // __SYSTEM_SCHEDULER_REGISTRY_H__
