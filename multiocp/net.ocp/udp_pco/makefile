#  (C) Copyright McCaw Cellular Communications, Inc 1995. All rights reserved.
#  (C) Copyright Neda Communications, Inc 1995. All rights reserved.
# 
#  All Rights Reserved.
# 
#  This software is furnished under a license and use, duplication,
#  disclosure and all other uses are restricted to the rights specified
#  in the written license between the licensee and copyright holders.
#
#
#  File name: makefile
#
#  Description: UDP Interface module
#
# RCS: $Id: makefile,v 1.2 1996/04/15 22:18:36 mohsen Exp $
#
# :::::::::::::
SHELL=/bin/sh
LB=ar r
CFLAGS = 
LIBS_PATH =
RANLIB = echo


PKG= $(LIBS_PATH)/udp_pco.a
PUB_H= 
LCL_H= 
LCL_C= udp_if.c udp_po.c udp_pc.c
C_SRC=  $(PUB_H) $(LCL_H) $(LCL_C)
#
OBJS= udp_if.o udp_po.o udp_pc.o
#
MAN= 

#
$(PKG):       $(OBJS)
	${LB} ${PKG} ${OBJS}
	${RANLIB} ${PKG}
#
e_pub_h:
	@echo ${PUB_H}
e_lcl_h:
	@echo ${LCL_H}
e_lcl_c:
	@echo ${LCL_C}
e_c_src:
	@echo ${C_SRC}
e_objs:
	@echo ${OBJS}
e_pkg:
	@echo ${PKG}
e_man:
	@echo ${MAN}
#
ctags:  ${LCL_C}
	ctags ${LCL_C}
#
