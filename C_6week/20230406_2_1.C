#include <stdio.h>

int main(void)
{
    int n;
    int i=1;
    int sum=0;

    printf("정수를 입력하시오:");
    scanf("%d", &n);

    while(i<=n)
    {
        i++;
        if(i%2==0)
        {
            sum +=i;
        }
    }
     printf("1부터 %d까지의 짝수의 합은 %d입니다.", n, sum);
    return 0;
}