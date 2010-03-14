CROSS ?= arm-elf-
CC = $(CROSS)gcc
AR = $(CROSS)ar
INCLUDES = -I../../includes
OBJECTS = fpu_init.o fpu_shutdown.o
CFLAGS = -nostdlib -mlittle-endian -mfpu=vfp -mthumb -mthumb-interwork

%.o:	%.S
	$(CC) $(INCLUDES) $(CFLAGS) -c $(<) -o $(@)

%.o:	%.c
	$(CC) $(INCLUDES) $(CFLAGS) -c $(<) -o $(@)

all: libfpu.a
	
libfpu.a: $(OBJECTS)
	$(AR) r $(@) $(OBJECTS)
	cp $(@) ..;
	
clean:
	rm -rf *.o *.a