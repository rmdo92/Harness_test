#pragma once


/* Format 
 *
 *  0x8000_0000 - System
 *  0x7000_0000 -
 *  0x6000_0000 -
 *  0x5000_0000 -
 *  0x4000_0000 -
 *  0x3000_0000 - HAL
 *  0x2000_0000 - Modules
 *  0x1000_0000 - Drivers
 */

/* 0x8 - Systems */
#define CROOT_CLASS      ( 0x80000000 )

#define CREGISTRY_CLASS  ( 0x80000001 )

#define CSCHEDULER_CLASS ( 0x81000001 )

/* 0x7 -          */
/* 0x6 -          */
/* 0x5 -          */
/* 0x4 -          */
/* 0x3 - HAL      */
/* 0x2 - Modules  */
/* 0x1 - Drivers  */
