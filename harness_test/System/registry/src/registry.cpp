
#include "debug.h"
#include "registry.h"


 cRegistry::cRegistry( void )
{
	 DEBUG_MESSAGE("cRegistry");

	 Add(this);
}

 int cRegistry::Add(cRoot* item)
 {
	 Reg.push_back(item);

	 return 0;
}

void cRegistry::Dump( void )
{
	int i = 0;

	printf("---------------------------------------\n");
	printf("index - Name                             ID       Type\n");
	for (std::list<cRoot *>::iterator it = Reg.begin(); it != Reg.end(); it++)
	{
		cRoot* Item = *it;
		i++;
		printf(" %3d  - %-32s %08x %08x\n", i, Item->GetName(), Item->GetID(), Item->GetType());
	}

	printf("---------------------------------------\n");
}
