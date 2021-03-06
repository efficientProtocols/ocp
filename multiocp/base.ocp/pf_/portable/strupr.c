/*
 *  This file is part of the Open C Platform (OCP) Library. OCP is a
 *  portable library for development of Data Communication Applications.
 * 
 *  Copyright (C) 1995 Neda Communications, Inc.
 * 	Prepared by Mohsen Banan (mohsen@neda.com)
 * 
 *  This library is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Library General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  License, or (at your option) any later version.  This library is
 *  distributed in the hope that it will be useful, but WITHOUT ANY
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
 *  License for more details.  You should have received a copy of the GNU
 *  Library General Public License along with this library; if not, write
 *  to the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139,
 *  USA.
 * 
 */

/*+
 * File:	strupr.c
 *
 * Description: Change string to upper case.
 *
-*/

/*
 * Author: Mohsen Banan.
 * History:
 *
 */

#ifdef RCS_VER	/*{*/
static char rcs[] = "$Id: strupr.c,v 1.6 1996/11/07 02:46:12 kamran Exp $";
#endif /*}*/

#include "estd.h"


/*<
 * Function:    PF_strUpper
 *
 * Description: Change string to upper case.
 *
 * Arguments:	String.
 *
 * Returns: 	Pointer to last character.
 *
>*/


char *
PF_strUpper (char *str)
{
    char c;
    char * retval;

    retval = str;
    while ( (c= *str) ) {
        if (islower(c)) {
            *str++ = toupper(c);
        } else {
            str++;
        }
    }
    return retval;
}
