## Description

This program uses interrupts on to detect whether one of the 4 switches from
the extension board was pressed or not. When one of the switches on the
extension board is pressed a specific task is carried out depending on which
was pressed. Switch 1 acts as an off button for both the buzzers, leds, and shapes. Switch
2 when press turn on both green and red leds, then blinks red only, then green
only, then both leds shut off,then a red octagon appears on screen. Switch 3
has a similar sequence to switch 2 butnimplements noise that from the
buzzer and a black diamond appears on screen. Switch 4 combines all the actions of from swtitch 2
and switch 3 into one by having a the tone of the buzzer alternate when the
leds alternate, also a yellow star like shape appears on screen.  

## How to Use 

The Makefile in this directory is used to build program on the msp430 in order
to be able to run the program on the msp430. To implement program onto msp430
simply type make load while in the project folder. To get rid of unwanted executable
files simply type make clean while in the project folder.
