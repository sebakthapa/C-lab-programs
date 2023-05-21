// Program to enter two integers and then display their sum
//author:Sebak Thapa

#include <stdio.h>

int main(){
	int a, b, sum;
	
	// taking 2 numbers from user
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	
	// calculating sum and storing 
	sum= a+ b;
	
	//	displaying the sum
	printf("The sum of %d and %d is %d", a,b,sum);
	
	return 0;
}
