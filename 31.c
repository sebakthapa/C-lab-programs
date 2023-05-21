// Program: Print Value of a Pointer to an Integera Vriable
// Author: Sebak Thapa

#include <stdio.h>

int main() {
    int num = 10;  
    int *ptr;     

    ptr = &num;   

    printf("Value of the integer variable: %d\n", num);
    printf("Value of the pointer: %d\n", *ptr);

    return 0;
}

