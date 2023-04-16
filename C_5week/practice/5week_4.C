#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double a, b, answer=0;

    printf("분자와 분모를 입력하시오:");
    scanf("%d %d", &a, &b);

    answer = a/b;

    if (b==0)
    {
        printf("분모가 0입니다.");
    }
    else
    {
        printf("결과는 %lf입니다.", answer);
    }
    return 0;
}