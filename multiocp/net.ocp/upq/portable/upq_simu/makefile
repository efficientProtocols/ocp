#
#
#  Description: 
#	Service Provider Shell
#
#
# RCS: $Id: makefile,v 1.3 1995/10/10 07:56:07 mohsen Exp $
#
# :::::::::::::

PKG= $(LIBS_PATH)/upq_simu.a
PUB_H = imq.h sp_shell.h t_shell.h
LCL_H = local.h psq.h usq.h
LCL_C = imq.c psq.c usq.c 
C_SRC =  ${PUB_H} ${LCL_H} ${LCL_C}
OBJS  = imq.o psq.o usq.o

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
#
ctags:  ${LCL_C}
	ctags $(LCL_C)
