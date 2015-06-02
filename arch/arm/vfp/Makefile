#
# linux/arch/arm/vfp/Makefile
#
# Copyright (C) 2001 ARM Limited
#

# ccflags-y := -DDEBUG
# asflags-y := -DDEBUG

KBUILD_AFLAGS   :=$(KBUILD_AFLAGS:-msoft-float=-Wa,-mfpu=neon -mvectorize-with-neon-quad -ftree-vectorize  -funsafe-math-optimizations -funsafe-loop-optimizations)
LDFLAGS		+=--no-warn-mismatch

obj-y			+= vfp.o

vfp-$(CONFIG_VFP)	+= vfpmodule.o entry.o vfphw.o vfpsingle.o vfpdouble.o
