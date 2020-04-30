/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
/*int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;
  u_char j,i;
  clearScreen(COLOR_BLUE);
*/
//u_char j,i;
  u_char width = screenWidth, height = screenHeight;
  u_char j,i;

  //Creates lines from different directions

  /*i = 20;
  
  for (j=10; j<30; j++)
    drawPixel(i, j, COLOR_BLACK);

  for (j=10; j<30; j++)
  drawPixel(j, i, COLOR_BLACK);
 
  for (j=10; j<30; j++)
    drawPixel(j, j, COLOR_BLACK);

  i = 30;

  for (j=10; j<30; j++)
  drawPixel(i--, j, COLOR_BLACK);*/
  

  

  // draws house

  /*for (j=35; j<60; j++)
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

  //draws triangle
  /*for (int c = 0; c <= 10; c++) {
    int rStart = c;
    int rEnd = 10;
    for (int r =  rStart; r<= rEnd; r++){
      drawPixel(i + c, j + r, COLOR_BLACK);
      drawPixel(i + c, j - r, COLOR_BLACK);
    }
    }*/
	   
  //trapezoid
  /*for(i = 0; i<= 10; i++){
    for(j = 0; j<=10+i; j++){
      drawPixel(50+20 - j, 50+i, COLOR_BLACK);
      drawPixel(50+20 + j, 50+i, COLOR_BLACK);
    }
    }*/

  //Diamond
  void Diamond(){
    for(i = 0; i<=10; i++){
      for(j = 0; j<=10-i; j++){
	drawPixel(50+i,50+j,COLOR_BLACK);
	drawPixel(50+i,50-j,COLOR_BLACK);
	drawPixel(50-i,50+j,COLOR_BLACK);
	drawPixel(50-i,50-j,COLOR_BLACK);
      }
    }
  }  
  //Octagon
  /*for(i = 0; i<= 10; i++){
    for(j = 0; j <= 10; j++){
      drawPixel(50+i,50+j,COLOR_RED);
      drawPixel(50+i,50-j,COLOR_RED);
      drawPixel(50-i,50+j,COLOR_RED);
      drawPixel(50-i,50-j,COLOR_RED);

    }
  }

  for(j = 5; j>=0; j--){
    for(i = 5-j; i<=5; i++){
      drawPixel(55+i, 55+j, COLOR_BLUE);
      drawPixel(55+i, 45-j, COLOR_BLUE);
      drawPixel(45-i, 55+j, COLOR_BLUE);
      drawPixel(45-i, 45-j, COLOR_BLUE);
    }
  }*/

  
  
  //Octagon 2
  void Octagon(){
   for(j = 0; j<=10; j++){

    if(j <= 4){
      for(i = 0; i <= 10; i++){
	drawPixel(70+i, 70+j, COLOR_RED);
	drawPixel(70+i, 70-j, COLOR_RED);
	drawPixel(70-i, 70+j, COLOR_RED);
	drawPixel(70-i, 70-j, COLOR_RED);
      }
    }else{
      int end = 16 - j;
      for(i = 0; i < end; i++){
	drawPixel(70+i, 70+j, COLOR_RED);
	drawPixel(70+i, 70-j, COLOR_RED);
	drawPixel(70-i, 70+j, COLOR_RED);
	drawPixel(70-i, 70-j, COLOR_RED);
      }
    }
  }
  }
//}

//TRIANGLE
/*for (j =0; j<=15; j+=3){
  int colLeft = 15 - j;
  int colRight = 15;
  for (i = colLeft; i <= colRight; i++){
    drawPixel(i,j,COLOR_RED);
  }
 }
 }*/

/*
u_char size = 15;
for(u_char r = 0; r <= size; r+=3){
  u_char colLeft = size - r;
  u_char colRight = size;
  for(u_char c = colLeft; c<= colRight; c+=3){
    drawPixel(20 + c, 30 + r, COLOR_RED);
    drawPixel(20 - c, 30 + r, COLOR_RED);
    drawPixel(20 + c, 30 - r, COLOR_RED);
    drawPixel(20 - c, 30 - r, COLOR_RED);
  }
 }
}
*/
 
