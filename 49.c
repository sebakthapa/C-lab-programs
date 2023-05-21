//Program: Draw a rectangle having a diagonal of length 100 pixels and its one end at point (10,20).
//Author: Sebak Thapa

#include <graphics.h>

int main() {
   // Initialize graphics
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   // Define the coordinates
   int x1 = 10, y1 = 20;
   int x2 = x1 + 100, y2 = y1 + 100;

   // Draw the rectangle
   rectangle(x1, y1, x2, y2);

   // Wait for a key press
   getch();

   // Close the graphics window
   closegraph();

   return 0;
}

