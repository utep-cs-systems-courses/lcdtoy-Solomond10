#include <msp430.h>
#include "libTimer.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"
#include "stateMachines.h"
//#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

void main(void) 
{  
  configureClocks();
  switch_init();
  led_init();
  buzzer_init();
  lcd_init();
  enableWDTInterrupts();
  //u_char width = screenWidth, height = screenHeight;
  //u_char j,i;
  clearScreen(COLOR_BLUE);


  or_sr(0x18);  // CPU off, GIE on
} 
