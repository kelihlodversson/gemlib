# Native wrappers over pTOS libaes. This backend issues no AES traps.
.DEFAULT_GOAL := all
ARCH ?= x32
PTOS_INCLUDE ?= ../pTOS/include
PTOS_BUILD ?= .libptos-$(ARCH)
PREFIX ?= /usr

PTOS_CC_x32 = gcc
PTOS_CC_arm = arm-none-eabi-gcc
PTOS_CC_m68k = m68k-atari-mintelf-gcc
PTOS_FLAGS_x32 = -mx32 -march=x86-64 -fPIC
PTOS_FLAGS_arm = -march=armv6k -marm -mfpu=vfp -mfloat-abi=hard -fPIC
PTOS_FLAGS_m68k = -m68020
ifeq ($(PTOS_CC_$(ARCH)),)
$(error Unknown native pTOS architecture: $(ARCH))
endif
ifeq ($(origin CC),default)
CC = $(PTOS_CC_$(ARCH))
endif
ifeq ($(origin AR),default)
AR = $(patsubst %gcc,%ar,$(CC))
endif
PTOS_CFLAGS = $(PTOS_FLAGS_$(ARCH)) -std=gnu90 -Os -ffreestanding \
              -fno-builtin -fno-stack-protector -ffunction-sections -fdata-sections \
              -Wall -Wextra -Werror -MMD -MP -Iptos -I$(PTOS_INCLUDE)
PTOS_OBJECTS = $(PTOS_BUILD)/bindings.o $(PTOS_BUILD)/rectangles.o

.PHONY: all clean install
all: $(PTOS_BUILD)/libgem.a
$(PTOS_BUILD)/%.o: ptos/%.c ptos/gem.h ptos/mt_gem.h
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(PTOS_CFLAGS) -c $< -o $@
$(PTOS_BUILD)/libgem.a: $(PTOS_OBJECTS)
	$(AR) rcs $@ $^
clean:
	rm -rf $(PTOS_BUILD)
install: all
	install -d $(DESTDIR)$(PREFIX)/lib $(DESTDIR)$(PREFIX)/include
	install -m 644 $(PTOS_BUILD)/libgem.a $(DESTDIR)$(PREFIX)/lib/libgem.a
	install -m 644 ptos/gem.h ptos/mt_gem.h $(DESTDIR)$(PREFIX)/include/

-include $(PTOS_OBJECTS:.o=.d)
