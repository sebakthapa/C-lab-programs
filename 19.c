// Program: to find the First Prime Number between 1 to 100
// Author: Sebak Thapa

#include <stdio.h>

int main() {
    int num, isPrime;

    for (num = 2; num <= 100; num++) {
        isPrime = 1;  // Assume num is prime initially

        // Check if num is divisible by any number less than itself
        int i;
        for ( i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // num is not prime
                break;
            }
        }

        if (isPrime) {
            printf("The first prime number between 1 and 100 is: %d\n", num);
            break;  // Exit the loop when the first prime number is found
        }
    }

    return 0;
}
