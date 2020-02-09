#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#	  <Put a description of the supported targets here>
#
# Platform Overrides:
#	  <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# compiler flags, linker flags, and architecture flags


GENERAL = -Wall\
	  	  -Werror\
		  -g\
		  -O0\
		  -std=c99  

# Platform Overrides
PLATFORM =

#make build PLATFORM=MSP432
ifeq ($(PLATFORM),MSP432)

	#Architecture specific flags
	LINKER_FILE = ../msp432p401r.lds
	CPU 		= cortex-m4
	ARCH 		= thumb
	SPECS 		= nosys.specs

	#Flags and defines
	CC	 		= arm-none-eabi-gcc
	LDFLAGS 	= -Wl,-Map=c1m2.map $(INCLUDES) -T $(LINKER_FILE)

	CPPFLAGS 	= -DMSP432 -MD

	CFLAGS 		= -mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS)\
				  -march=armv7e-m -mfloat-abi=hard\
				  -mfpu=fpv4-sp-d16					  

	OBJS		= $(SOURCES:,c=.o)
	DUMP 		= arm-none-eabi-objdump

endif



#make build PLATFORM=HOST
ifeq ($(PLATFORM),HOST)

	CC 			= gcc
	CPPFLAGS 	= -DHOST -MD $(INCLUDES)
	DUMP 		= objdump
	OBJS		= $(SOURCES:.c=.o)

endif


OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(GENERAL) $(LDFLAGS) -c $< -o $@

%.i : %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(GENERAL) $(LDFLAGS) -E $< -o $@

%.asm : %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(GENERAL) $(LDFLAGS) -c $< -o $@
	$(DUMP) -S $@

.PHONY: build
build: final.out
final.out: $(SOURCES)
	$(CC) $(SOURCES) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(GENERAL) -o final.out
	size final.out

.PHONY: compile-all
compile-all: $(SOURCES)
	$(CC) $(SOURCES) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(GENERAL) -c

.PHONY: clean
clean:
	rm -f *.o *.asm *.i *.d *.map *.out