#include <stdio.h>

int uadd_ok(unsigned x,unsigned y){
	return (x+y>=x)? 1 : 0;
}

int main(){
	unsigned a,b;
	scanf("%u %u",&a,&b);
	printf("%d\n",uadd_ok(a,b));
	return 0;
}
