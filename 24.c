// Program: Generating Fibonacci Series using Recursive Function
// Author: Sebak Thapa

#include <stdio.h>

// Recursive function to generate the Fibonacci series
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int count, i;

    printf("Enter the number of terms: ");
    scanf("%d", &count);

    printf("Fibonacci Series: ");

    // Generate and print Fibonacci series
    for (i = 0; i < count; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

