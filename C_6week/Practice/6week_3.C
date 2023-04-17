//1부터 n까지의 합 계산

#include <stdio.h>

int main()
{
    int n=0, a, sum;

    printf("정수 입력:");
    scanf("%d", &n);

    a=1, sum=0;
    while(a<=n)
    {
        sum = sum + a;
        a++;
    }
    printf("1부터 %d까지의 합은 %d 입니다.\n", n, sum);
    return 0;
}

