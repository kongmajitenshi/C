#include <stdio.h>

int main()
{
    int n, i, result=1;

    printf("정수 입력:");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) // 팩토리얼 계산 for문 버전
    {
        result = result * i;
    }
    printf("%d!은 %d입니다.", n, result);

    return 0;

}