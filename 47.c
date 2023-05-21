// Author: Sebak Thapa
// Program: Draw two concentric circles using graphics.h

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set center point and radii
    int centerX = 100;
    int centerY = 100;
    int innerRadius = 50;
    int outerRadius = 75;

    // Draw the outer circle
    setcolor(WHITE);
    circle(centerX, centerY, outerRadius);

    // Draw the inner circle
    setcolor(WHITE);
    circle(centerX, centerY, innerRadius);

    // Close the graphics window
    closegraph();

    return 0;
}

