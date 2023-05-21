// Program to prompt the user to input 3 integer values and print these values in forward and reversed order.
//author:Sebak Thapa

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt the user for input
    printf("Enter three integer values:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Print the values in forward order
    printf("Forward order: %d, %d, %d\n", num1, num2, num3);

    // Print the values in reversed order
    printf("Reversed order: %d, %d, %d\n", num3, num2, num1);

    return 0;
}
