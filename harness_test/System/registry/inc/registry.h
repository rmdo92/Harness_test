

#ifndef __SYSTEM_REGISTRY_REGISTRY_H__
#define __SYSTEM_REGISTRY_REGISTRY_H__

#include <list>
#include "root.h"

class cRegistry : public cRoot
{
public:
	cRegistry(void);

	void Dump(void);

private:
	std::list<cRoot> Reg;

};

#endif // __SYSTEM_REGISTRY_REGISTRY_H__
