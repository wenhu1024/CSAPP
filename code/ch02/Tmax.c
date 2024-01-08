#include <stdio.h>

int isTmax(int x) {
  int y=x+1;
  int z=y+y;
  return  (!z)&(!!y);
    // int a = x+1;
    // return !((~a+1)^a)&(!!a);
}

int main(){
	int x;
	scanf("%i",&x);
	printf("%d\n",isTmax(x));
	return 0;
}
