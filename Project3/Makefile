# makfile configuration
COMMON_OBJECTS  = 
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as

all: button.elf 

#additional rules for files
button.elf: ${COMMON_OBJECTS} p1_interrupt_handler.o led.o switches.o buttonMain.o buzzer.o stateMachines.o wdInterruptHandler.o soundChange.o lcdx.o lcddraw.o lcdutils.o font-4x8.o font-5x7.o font-7x9.o libTimer.a
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: button.elf
	msp430loader.sh button.elf

clean:
	rm -f *.o *.elf *~ *#

led.o: led.c led.o

wdInterruptHandler.o: stateMachines.h soundChange.h

lcdx.o: lcdx.c lcdx.o

stateMachines.o: led.h stateMachines.h

