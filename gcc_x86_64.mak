#
# Makefile for gemlib - x86_64 ILP32 target
#

CROSS = yes
ifeq ($(CROSS),yes)
CC     = x86_64-elf-gcc
AR     = x86_64-elf-ar
else
CC     = gcc
AR     = ar
endif

CFLAGS = -mx32 -ffreestanding -O2 -Wall -fomit-frame-pointer

include files.mak

.SUFFIXES:
.SUFFIXES: .c .S .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c -o $*.o

.S.o:
	$(CC) $(CFLAGS) -c $*.S -o $*.o

TARGET = $(LIB_X86_64)

$(TARGET): $(OBJ) $(X86_OBJ)
	$(RM) $@
	$(AR) cru $@ $^
