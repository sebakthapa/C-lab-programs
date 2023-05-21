// Program to sap two variable’s values by using third variables
//author:Sebak Thapa

#include <stdio.h>

int main() {
    int a, b, c;
    
//    taking data from user
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    
    //printing data before swapping
    printf("\n\nData before Swapping: \n");
    printf("a: %d \n", a);
    printf("b: %d \n", b);
    
//    swapping data of two variables
	c=a;
	a=b;
	b=c;
	
	//printing data after swapping
    printf("\n\nData after Swapping: \n");
    printf("a: %d \n", a);
    printf("b: %d \n", b);
	
	

    return 0;
}
