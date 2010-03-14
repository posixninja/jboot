CROSS ?= arm-elf-
CC = $(CROSS)gcc
LD = $(CROSS)ld
OBJCOPY = $(CROSS)objcopy
INCLUDES = -I../includes
SUBDIRS = arm fpu
LIBRARIES = -larm -lfpu
OBJECTS = entry.o main.o
CFLAGS = -nostdlib -mlittle-endian -mfpu=vfp -mthumb -mthumb-interwork
LDFLAGS = -nostdlib -L. -Tjboot.ld

%.o:	%.S
	$(CC) $(INCLUDES) $(CFLAGS) -c $(<) -o $(@)

%.o:	%.c
	$(CC) $(INCLUDES) $(CFLAGS) -c $(<) -o $(@)

all: jboot
	
jboot: $(OBJECTS)
	for i in $(SUBDIRS); do cd $$i; make all; cd ..; done
	$(LD) $(OBJECTS) $(LDFLAGS) $(LIBRARIES) -o $(@).elf
	$(OBJCOPY) -O binary $(@).elf $(@).bin
	
clean:
	for i in $(SUBDIRS); do cd $$i; make clean; cd ..; done
	rm -rf *.o *.a *.elf *.bin;