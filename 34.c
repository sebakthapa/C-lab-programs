// Program: String Concatenation 
// Author: Sebak Thapa

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";    
    char str2[] = " World!";        

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    // Concatenate the strings using strcat()
    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}

