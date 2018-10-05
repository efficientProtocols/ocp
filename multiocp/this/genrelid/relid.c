/*
 *  Copyright (C) 1995,1996  Neda Communications, Inc. All rights reserved.
 * 
 *  This software is furnished under a license and use, duplication,
 *  disclosure and all other uses are restricted to the rights specified
 *  in the written license between the licensee and copyright holders.
 * 
 */

/*+
 * File: cpr-nnn.tpl
 *
 * Description: Template file for Check Copyright message functions.
 *
 * Function: RELID_get%RELID_TYPE%(void)
 *
-*/

/*
 * Author: Mohsen Banan.
 * History:
 *
 */

#ifdef RCS_VER	/*{*/
static char rcs[] = "$Id: relid.tpl,v 1.2 1998/02/03 06:19:49 mohsen Exp $";
#endif /*}*/


/* 
 * This file is automatically generated.  Do not edit. 
 */

#include "estd.h"

/* 
 * the Copyright notice.
 */

static Char relidNoticeString[]= "BASEUA-MUL-GOLD 1.2 (CVS tag unspecified) \nBeta: derivative work based on sources which were released on 1998/06/12 17:41:44.\nBuilt on Sat Sep 18 22:10:59 PDT 1999 by mohsen on jamshid SunOS 5.4 Generic_101945-44 sun4m \nin the /h3/pcnfs/u/neda/devenv/ocpdevl.mul-gold-1.2 directory.\n";




/*<
 * Function:    RELID_getCopyright
 *
 * Description: Check copyright message
 *
 * Arguments:   None.
 *
 * Returns:     Pointer to copyright notice on successful completion, 
 *              0 otherwise.
 *
>*/

PUBLIC String 
RELID_getRelidNotice(Void)
{
	return ( relidNoticeString );
} 
