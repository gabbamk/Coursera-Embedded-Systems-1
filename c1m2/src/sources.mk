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

# Add your Source files to this variable
# The list of source files that will need to be compiled (Platform Specific)

ifeq ($(PLATFORM),MSP432)
  SOURCES =		\
  ./main.c	\
  ./memory.c	\
	./interrupts_msp432p401r_gcc.c	\
	./startup_msp432p401r_gcc.c	\
	./system_msp432p401r.c
  INCLUDES =                   \
  -I../include/msp432/   \
  -I../include/common/   \
  -I../include/CMSIS/
endif

# Add your include paths to this variable
# The list of include directories (Hing: Use the -I flag)
ifeq ($(PLATFORM),HOST)
  SOURCES =             \
    ./main.c        \
    ./memory.c
  INCLUDES =                   \
  -I../include/common/   
endif