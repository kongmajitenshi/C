#include <stdio.h>

int main()
{
    int x=20, y=10;
    int sum=0, diff=0, mul=0, div=0;

    sum = x + y;
    diff = x - y;
    mul = x * y;
    div = x / y;

    printf("합:%d, 차:%d, 곱:%d, 몫:%d", sum, diff, mul, div);
    return 0;
}