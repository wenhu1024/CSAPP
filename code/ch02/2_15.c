#include <stdio.h>

int main()
{
	int x,y,res;
	scanf("%d %d",&x,&y);
	res=!(x^y);
	printf("%d\n",res);
	return 0;
}
