#include <stdio.h>
#include "inplace_swap.h"
#define MAX_LENGTH 1000

int num[MAX_LENGTH];

void reverse_array(int a[],int cnt){
	int first,last;
	for(first=0,last=cnt-1;first<last;){
		inplace_swap(&a[first++],&a[last--]);
	}
}

int main(){
	int _size;
	printf("input the size of array:\n");
	scanf("%d",&_size);
	printf("input the values of array:\n");
	for(int i=0;i<_size;++i){
		scanf("%d",&num[i]);
	}
	reverse_array(num,_size);
	printf("output the values of array:\n");
	for(int i=0;i<_size;++i){
		printf("%d ",num[i]);
	}
		printf("\n");
	return 0;
}
