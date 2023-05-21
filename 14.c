// Program to find greatest/smallest among 3 number and also if the num is odd or even
//author:Sebak Thapa

#include <stdio.h>

void oddeven(int a){
	if(a%2 == 0){
		printf(" and it is even\n", a);
	}else{
		printf(" and it is odd\n", a);
	}
}

int main() {
	int a,b,c;
	
    printf("Enter 3 numbers (a b c): ");
	scanf("%d %d %d", &a, &b, &c); 
	
	if(a>b && b >c){
		printf("%d is the greatest", a);
		oddeven(a);
	}else if(b>c && c>a){
		printf("%d is the greatest", b);
		oddeven(b);
	}else{
		printf("%d is the greatest", c);
		oddeven(c);
	}
	
    return 0;
}
