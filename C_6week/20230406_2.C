#include <stdio.h>

int main(void)
{
    int n;
    int i=1;

    printf("정수를 입력하시오:");
    scanf("%d", &n);

    while(n<10)
    {
        printf("1부터 %d까지의 합은 %d입니다.", n, n+i);
        i++;
    }
    return 0;
}