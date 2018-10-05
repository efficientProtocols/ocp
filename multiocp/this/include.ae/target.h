/*
 * $Id: target.h,v 1.1.1.1 1998/01/30 00:50:08 mohsen Exp $
 *
 * 
 * Copyright Sierra Wireless Inc., 1997. All rights reserved.
 *
 */
#ifndef _target_h_
#define _target_h_

/* Target is: MP215 with SRAM
 * This means:
 *    GPS Port Populated
 *    Trace debug goes to GPS Port (COM3)
 */

#include "ae_init.h"
#include "aecomprt.h"

// #define AE_PROFILE_PRODUCTION	0x01		// Production Hardware
// #define AE_PROFILE_OLD			0x02		// Old Hardware (No U11)
// #define AE_PROFILE_256_ROM		0x04		// 256K ROM
// #define AE_PROFILE_512_FLASH	0x08		// 512K Flash


#define AE_PROFILE 	(AE_PROFILE_PRODUCTION | AE_PROFILE_256_ROM)


#define COM_BIRDBOX 1
#define COM_MP215   2

#define COMCFG COM_MP215

#define HOST_PORT		COM1
#define MODEM_PORT		COM2
#define DEBUG_PORT		COM3


#endif // _target_h_
