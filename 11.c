// Program to illustrate formatted output
//author:Sebak Thapa

#include <stdio.h>

int main() {
    int x = 6, y=3;
    
//    displaying the result
	printf("X\t \tY\t   expression\t \tresults\n");
	printf("%d\t|\t%d\t|  x=y+3\t|\tx=%d\n", x	,y,y+3);
	printf("%d\t|\t%d\t|  x=y-2\t|\tx=%d\n", x	,y,y-2);
	printf("%d\t|\t%d\t|  x=y*5\t|\tx=%d\n", x	,y,y*5);
	printf("%d\t|\t%d\t|  x=x/y\t|\tx=%d\n", x	,y,x/y);
	printf("%d\t|\t%d\t|  x=x%%y\t|\tx=%d\n", x	,y,x%y);
	
    return 0;
}
