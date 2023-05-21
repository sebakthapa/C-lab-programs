// Program to calculate simple interest for given P=400, T=2, R=5.5
//author:Sebak Thapa

#include <stdio.h>

int main(){
	int p=400, t=2;
	float r=5.5, si;
	
	// calculating simple interest si=ptr/100
	si = p * t * r / 100;
	
	//	displaying the result
	printf("The simple interest of RS %d at the rate of %.2f in %d years is RS %.2f", p,r,t, si);
	
	return 0;
}
