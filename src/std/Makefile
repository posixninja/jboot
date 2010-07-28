CROSS ?= arm-elf-
CC = $(CROSS)gcc
AR = $(CROSS)ar
LIBS = libstd.a
INCLUDES = -I../../includes
OBJECTS = printf.o memset.o strncpy.o malloc.o free.o heap.o
CFLAGS = -nostdlib -mlittle-endian -mfpu=vfp -mthumb -mthumb-interwork

%.o:	%.S
	$(CC) $(INCLUDES) $(CFLAGS) -c $(<) -o $(@)

%.o:	%.c
	$(CC) $(INCLUDES) $(CFLAGS) -c $(<) -o $(@)

all: $(LIBS)
	
$(LIBS): $(OBJECTS)
	$(AR) r $(@) $(OBJECTS)
	cp $(@) ..;
	
clean:
	rm -rf *.o *.a
