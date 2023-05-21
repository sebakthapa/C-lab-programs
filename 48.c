// Author: Sebak Thapa
// Program: Program that displays text using the outtext() function

#include <graphics.h>

int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   // Set the font style, size, and color
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
   setcolor(YELLOW);

   // Display the text
   outtext("Hello, World!");

   delay(2000); // Delay for 2 seconds

   closegraph();
   return 0;
}

