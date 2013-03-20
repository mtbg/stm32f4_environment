OBJS=main.o
TARGET_CPU=cortex-m4
TARGET=test

STARTUP=startup.o
TOOLCHAIN_PREFIX=arm-unknown-linux-gnueabi-
CC=$(TOOLCHAIN_PREFIX)gcc
LD=$(TOOLCHAIN_PREFIX)gcc
OBJCOPY=$(TOOLCHAIN_PREFIX)objcopy
OBJDUMP=$(TOOLCHAIN_PREFIX)objdump
CFLAGS=-mthumb -mcpu=$(TARGET_CPU) -Wl,--no-gc-sections -O2 -g
LD_SCRIPT=script.ld

all: $(TARGET).elf $(TARGET).bin $(TARGET).hex

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.S
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET).elf: $(OBJS) $(STARTUP)
	$(LD) $(CFLAGS) -T$(LD_SCRIPT) -nodefaultlibs -nostartfiles $^ -o $@

%.hex: %.elf
	$(OBJCOPY) -O ihex $< $@

%.bin: %.elf
	$(OBJCOPY) -O binary $< $@

dump: $(TARGET).elf
	$(OBJDUMP) -d -S $<

dump_all: $(TARGET).elf
	$(OBJDUMP) -D $<

clean:
	rm -f $(OBJS) $(STARTUP) $(TARGET).elf $(TARGET).hex $(TARGET).bin

