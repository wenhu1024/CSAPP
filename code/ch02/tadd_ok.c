#include <stdio.h>
int tadd_ok(int x,int y){
	int sum= x + y;
	int neg_over = x<0 && y<0 && sum>=0;
	int pos_over = x>0 && y>0 && sum<=0;
	return !neg_over && !pos_over;
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",tadd_ok(a,b));
	return 0;
}

