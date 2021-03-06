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
static char rcs[] = "$Id: notice_p.c,v 1.1.1.1 1998/01/30 00:50:06 mohsen Exp $";
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

static Char cpRightNotice[]= "Copyright (C) 1995, 1996 Neda Communications, Inc. All rights reserved.\n";



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

#ifndef SHOW_CRC

PUBLIC String
CPR_getCopyrightNotice(Void)
{

    MdUns crc;
    Int len;

    len = strlen(cpRightNotice);
    crc = PF_crc16(cpRightNotice, len, 0);


#define NOTICE_LEN	XXX_NOTICE_LEN_XXX
#define NOTICE_CRC	XXX_NOTICE_CRC_XXX

    if ( (len != NOTICE_LEN) || (crc != NOTICE_CRC) ) {
	return ( (Char *) 0 );
    } else {
	return ( cpRightNotice );
    }
} /* CPR_getCopyrightNeda(void) */
#endif



#ifdef SHOW_CRC

static char *usage = "usage: %s [-l] [-c] \n\
 -l prints out the length of copyright notice \n\
 -c prints out the crc for copyright notice\n";

void
main(int argc, char **argv)
{
    int c;
    extern char *optarg;
    extern int optind;

    MdUns crc;
    Int len;
    
    len = strlen(cpRightNotice);
    crc = PF_crc16(cpRightNotice, len, 0);

    while ((c = getopt(argc, argv, "lc")) != EOF) {
	switch ( c ) {
	case 'l':
	    printf("%d\n", len);
	    break;

	case 'c':
	    printf("0x%x\n", crc);
	    break;

	case '?':
	default :
	    printf(usage, argv[0]);
	    exit(13);
	}
    }
    exit(0);
}
#endif



#ifdef TEST
void 
main()
{
    char *cpRightNotice;

    if ( ! (cpRightNotice = CPR_getCopyright()) ) {
        printf("CRC Check for copy right notice failed\n");
	exit(1);
    }
    printf("%s\n", cpRightNotice);
}
#endif

