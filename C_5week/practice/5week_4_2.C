#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double a, b, answer=0;

    printf("분자와 분모를 입력하시오:");
    scanf("%d %d", &a, &b);

    if (b==0)
    {
        printf("분모가 0입니다.");
        return 0;
    }

    answer = a/b;

    printf("결과는 %lf 입니다.", answer);
    
    return 0;
}