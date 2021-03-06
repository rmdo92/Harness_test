
#ifndef __SYSTEM_ROOT_ROOT_H__
#define __SYSTEM_ROOT_ROOT_H__

#include <string.h>
#include "harness/class_types.h"

#include "debug.h"

class cRoot
{
protected:
	char Name[32];
	unsigned long Type;
	unsigned long ID;

public:
	cRoot(void) { DEBUG_MESSAGE("cRoot"); strncpy_s(Name, (const char*)"Bad name", 32); Type = CROOT_CLASS; };
	~cRoot(void) { DEBUG_MESSAGE("~cRoot"); };

	void Init( const char* name ) { DEBUG_MESSAGE("cRoot::Init(%s) %d", name, (int)strlen(name)); strncpy_s(Name, name, 32); };
	void Setup( const unsigned long id ) { DEBUG_MESSAGE("cRoot::Setup(%08x)", id); ID = id; };
	void Tick(void) { DEBUG_MESSAGE("cRoot::Tick"); };
	void Dump(void) { DEBUG_MESSAGE("cRoot::Dump"); };

	char* GetName() { return Name; }
	long  GetType() { return Type; }
	long  GetID()   { return ID; }
};

#endif // __SYSTEM_ROOT_ROOT_H__
