#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double a, b, c, sum=0, avg=0;
    printf("3개의 실수를 입력하시오:");
    scanf("%lf %lf %lf", &a, &b, &c);
    sum = a+b+c;
    avg = (a+b+c)/3;
    printf("합계:%lf \n 평균: %lf", sum, avg);
    return 0;
}