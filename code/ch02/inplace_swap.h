void inplace_swap(int *x,int *y){
	*y=*x ^ *y;
	*x=*x ^ *y;
	*y=*x ^ *y;
}

// a ^ a=0
// a ^ (a^b)=b
// x ^ y = (x & ~y) | (~x & y)


