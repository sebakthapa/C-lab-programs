// Program: Create rectangle structure and calculate its area
// Author: Sebak Thapa

#include <stdio.h>

struct rectangle {
    int length;
    int width;
};

int main() {
    struct rectangle rect;

    // Read the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%d", &rect.length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &rect.width);

    // Calculate the area of the rectangle
    int area = rect.length * rect.width;

    // Print the area of the rectangle
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}

