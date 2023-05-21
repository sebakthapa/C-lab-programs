// Program to reverse multidigit integer
//author:Sebak Thapa

#include <stdio.h>

int main() {
	int a, rev=0;
	
	printf("Enter a multidigit number: ");
	scanf("%d", &a);
	
	while (a>0){
		rev = rev * 10 + a % 10;
		a /= 10;
	}
	
	printf("The reverse interger is: %d", rev);
	
    return 0;
}
