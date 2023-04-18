#include <stdio.h>

int main()
{
    int n, i=1, result=1;

    printf("정수 입력:");
    scanf("%d", &n);

    while(i<=n)
    {
        result = result * i;
        i++;
    }
    printf("%d은 %d입니다.", n, result);

    return 0;
}