#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x=20, y=10, sum=0, minus=0, mul=0, div=0;
    sum = x+y;
    minus = x-y;
    mul = x*y;
    div = x/y;
    printf("두 수의 합:%d \n 두 수의 차:%d \n 두 수의 곱:%d \n 두 수의 몫:%d", sum, minus, mul, div);
    return 0;
   

}