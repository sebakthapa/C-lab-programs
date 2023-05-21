//Program: Draw an ellipse having xRadius=100, yRadius=40 and center at point (100, 50)
//Author: Sebak Thapa

#include <graphics.h>

int main() {
   // Initialize graphics
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   // Define the ellipse parameters
   int x = 100, y = 50;
   int xRadius = 100, yRadius = 40;

   // Draw the ellipse
   ellipse(x, y, 0, 360, xRadius, yRadius);

   // Wait for a key press
   getch();

   // Close the graphics window
   closegraph();

   return 0;
}

