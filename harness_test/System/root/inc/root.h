
#ifndef __SYSTEM_ROOT_ROOT_H__
#define __SYSTEM_ROOT_ROOT_H__

#include <string.h>

#include "debug.h"

class cRoot
{
	char Name[32];
	long ID_type;
	long ID;

public:
	cRoot(void) { DEBUG_MESSAGE("cRoot"); strncpy(Name, (const char *)"Bad name", 32); };
	~cRoot(void) { DEBUG_MESSAGE("~cRoot"); };

	void Init( const char* name ) { DEBUG_MESSAGE("cRoot::Init(%s) %d", name, (int)strlen(name)); strncpy(Name, name, 32); };
	void Setup( const long id ) { DEBUG_MESSAGE("cRoot::Setup(%08x)", id); ID = id; };
	void Tick(void) { DEBUG_MESSAGE("cRoot::Tick"); };
	void Dump(void) { DEBUG_MESSAGE("cRoot::Dump"); };

};

#endif // __SYSTEM_ROOT_ROOT_H__
