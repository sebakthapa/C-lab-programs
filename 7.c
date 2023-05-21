// Program to calculate simple and compound interest
//author:Sebak Thapa

#include <stdio.h>
#include <math.h>

int main() {
    int t;
    float p, r, si, ci;
    
//    taking data from user
    printf("Enter the amount: ");
    scanf("%f", &p);
    printf("Enter the rate: ");
    scanf("%f", &r);
    printf("Enter the time in years: ");
    scanf("%d", &t);
    
//    calculation
    si = p * t * r / 100;
    ci = p * (pow((1+r/100),t) - 1);
    
//	displaying the result
	printf("\nThe Simple interest for given data is: Rs %.2f \n", si);
	printf("The Compound Interest for given data is: Rs %.2f",  ci);
    
    return 0;
}
