CROSS ?= arm-elf-
CC = $(CROSS)gcc
AR = $(CROSS)ar
INCLUDES = -I../../includes
OBJECTS = arm_init.o arm_control.o arm_auxiliary_control.o arm_translation_table.o arm_domain_access.o arm_access_control.o arm_cache.o arm_tlb.o arm_map_memory.o
CFLAGS = -nostdlib -mlittle-endian -mfpu=vfp -mthumb -mthumb-interwork

%.o:	%.S
	$(CC) $(INCLUDES) $(CFLAGS) -c $(<) -o $(@)

%.o:	%.c
	$(CC) $(INCLUDES) $(CFLAGS) -c $(<) -o $(@)

all: libarm.a

libarm.a:	$(OBJECTS)
	$(AR) r $(@) $(OBJECTS)
	cp $(@) ..;
	
clean:
	rm -rf *.o *.a
