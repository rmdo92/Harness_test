
#ifndef __SYSTEM_DEBUG__
#define __SYSTEM_DEBUG__

#include <stdio.h>

#define DEBUG_init() 
#define DEBUG_setup()
#define DEBUG_task()

#define DEBUG_MESSAGE(...)  { printf( "%s - %s (%d) :- ", __FILE__, __FUNCTION__, __LINE__ ) ; printf( __VA_ARGS__ ); printf( "\n" ); }


#endif // __SYSTEM_DEBUG__
