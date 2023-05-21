// Program: Display a definite pattern
// Author: Sebak Thapa

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "UNIVERSITY";
    int i,j;
    int length = strlen(str);

    // Print the pattern in ascending order
    for ( i = 1; i < length; i=i+2) {
        for ( j = 0; j <= i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    // Print the pattern in descending order
    for ( i = length - 2; i >= 0; i=i-2) {
        for ( j = 0; j <= i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}

