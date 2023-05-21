// Program that declares variable of different data types (int, float, char etc.) and prints their sizes using size of operator
//author:Sebak Thapa

#include <stdio.h>

int main() {
    int a;
    float b;
    char c, d[10];
    double e;
    
    
//    displaying the result
	printf("The size if 'int' is: %u bytes \n", sizeof(a));
	printf("The size if 'float' is: %u bytes \n", sizeof(b));
	printf("The size if 'char' is: %u bytes \n", sizeof(c));
	printf("The size if 'char[10]' is: %u bytes \n", sizeof(d));
	printf("The size if 'double' is: %u bytes \n", sizeof(e));
	
    return 0;
}
