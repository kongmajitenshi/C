#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double score;

    printf("점수입력:");
    scanf("%lf", &score);

    (score>=70)?printf("합격!"):printf("불합격!"); // printf(score>=70)?("합격!"):("불합격!") 라고 해도 잘 됨

    return 0;
}