#include <stdio.h>

int main()
{
    int a, b, sum;

    a=1, sum=0;
    while(a<=5)
    {
        printf("값을 입력하시오:");
        scanf("%d", &b);
        sum = sum + b;
        a++;
    }
    printf("합계는 %d입니다.", sum);
    return 0;
}