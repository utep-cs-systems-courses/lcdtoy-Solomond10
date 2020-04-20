/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;
  u_char j,i;
  clearScreen(COLOR_BLUE);


  /*

  Creates lines from different directions

  i = 20;
  
  for (j=10; j<30; j++)
    drawPixel(i, j, COLOR_BLACK);

  for (j=10; j<30; j++)
  drawPixel(j, i, COLOR_BLACK);
 
  for (j=10; j<30; j++)
    drawPixel(j, j, COLOR_BLACK);

  i = 30;

  for (j=10; j<30; j++)
    drawPixel(i--, j, COLOR_BLACK);
  */

  /*

   draws house

  for (j=35; j<60; j++)
    drawPixel(j+25, j, COLOR_BLACK);

  i = 60;

  for (j=35; j<60; j++)
    drawPixel(i--, j, COLOR_BLACK);

  j = 60;
  
  for (i=85; i>75; i--)
    drawPixel(i, j, COLOR_BLACK);

  i = 75;
  
  for (j=60; j<80; j++)
    drawPixel(i,j, COLOR_BLACK);

  j = 60;
  
  for (i=35; i<45; i++)
    drawPixel(i, j, COLOR_BLACK);

  i = 45;
  
  for (j=60; j<80; j++)
    drawPixel(i,j, COLOR_BLACK);

  j = 80;

  for (i=45; i<75; i++)
    drawPixel(i,j, COLOR_BLACK);
  
  */

  for (j=0; j<15; j++)
    drawPixel(j,j,COLOR_BLACK);

  for (j=0; j<15; j++)
    drawPixel(0, j, COLOR_BLACK);

  // j=20;
  for (i=0; i<15; i++)
    drawPixel(i, 15, COLOR_BLACK);

}
