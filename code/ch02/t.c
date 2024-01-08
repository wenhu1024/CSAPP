#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
int isTmax(int x) {
  //int y=x+0x1;
  return  !(x+x);
}

// 前面一部分用于判断左移一位后是否全部为0，后面一部分用来判断 x 值是否为 0
int isTmin(int x) {
   return !(x+x)&!!(x);
}
int main() {
    int a = -0x7fffffff-1; // INT_MAX 是系统能够表示的最大整数
    int b = 1;
    printf("%d\n",isTmin(a));

    float result = 123456789;
    printf("%d\n",!0);
    printf("%d\n",!(a+a));
    printf("%d\n",a);
    printf("Result: %d\n",isTmax(a));
    
    return 0;
}

