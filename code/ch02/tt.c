#include <stdio.h>

int main(){
	int x=0x80000000;
	int y=x+x;
	printf("      x = %d \n",x);
	printf("x+x     = %ld \n",(long)x+x);
	printf("!(y=x+x)= %d \n",!y);
	printf("!(x+x)  = %d \n",!(x+x));
	printf("!(x<<1) = %d \n",!(x<<1));
	return 0;
}
