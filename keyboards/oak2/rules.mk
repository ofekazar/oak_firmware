# This file intentionally left blank
MCU = atmega32u4
F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)
OPT_DEFS += -DUSE_SERIAL
BOOTLOADER = caterina