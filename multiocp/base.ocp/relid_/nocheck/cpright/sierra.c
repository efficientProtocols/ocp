/*
 *  Copyright (C) 1995,1996  Neda Communications, Inc. All rights reserved.
 * 
 *  This software is furnished under a license and use, duplication,
 *  disclosure and all other uses are restricted to the rights specified
 *  in the written license between the licensee and copyright holders.
 * 
 */


/*
 * Author: Mohsen Banan.
 * History:
 *
 */

#ifdef RCS_VER	/*{*/
static char rcs[] = "$Id: sierra.c,v 1.1.1.1 1997/10/21 18:24:55 mohsen Exp $";
#endif /*}*/


/* 
 * This file is automatically generated.  Do not edit. 
 */

#include "estd.h"
#include "pf.h"
#include "eh.h"

/* 
 * the Copyright notice.
 */

static Char cpRightNotice[]= "Copyright (C) 1997 Sierra Wireless, Inc. All rights reserved.\n";



/*<
 * Function:    CPR_getCopyright
 *
 * Description: Check copyright message
 *
 * Arguments:   None.
 *
 * Returns:     Pointer to copyright notice on successful completion, 
 *              0 otherwise.
 *
>*/

PUBLIC Char * 
CPR_getCopyrightSierra(void)
{
  return ( cpRightNotice );
} 
