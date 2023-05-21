// Program: Print Values of an Integer Array using Pointers
// Author: Sebak Thapa

#include <stdio.h>


int main() {
    int arr[5] = {1, 2, 3, 4, 5},i;  
    int *ptr;                         

    ptr = arr; 

    //printing values
    for ( i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr++;  // Move the pointer to the next element
    }

    printf("\n");

    return 0;
}

