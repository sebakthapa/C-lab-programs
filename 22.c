// Program: Calculating the Sum of First 50 Natural Numbers using Recursive Function
// Author: Sebak Thapa

#include <stdio.h>

// Recursive function to calculate the sum of the first 'n' natural numbers
int calculateSum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + calculateSum(n - 1);
    }
}

int main() {
    int n = 50;
    int sum = calculateSum(n);

    printf("Sum of the first %d natural numbers: %d\n", n, sum);

    return 0;
}
