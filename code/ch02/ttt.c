#include <stdio.h>

int isTmax(int x) {
  int y=x+0x1;
  printf("y = %d\n",y);
  int z=y+y;
  printf("z = %d\n",z);
  return  !(y+y)&!!y ;
}

int main(){
	int x;
	scanf("%i",&x);
	printf("%d\n",isTmax(x));
	return 0;
}
