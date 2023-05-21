// Program: program to print Sum of Even Numbers between two given numbers
// Author: Sebak Thapa

#include <stdio.h>

int main() {
    int start, end, sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

	int i;
    // Finding the sum of even numbers
    for (i = start+2; i < end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("Sum of even numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}




