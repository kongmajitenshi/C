#include <stdio.h>

int main(void)
{
    int a, b, t=0, sum=0;
    printf("두 값 입력:");
    scanf("%d %d", &a, &b);
    sum = a + b;
    while(t<5)
    {
        printf("%d + %d = %d", a, b, a+b);
        t++;
    }
    return 0;
}