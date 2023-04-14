#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float r, answer, pi=3.14;
    printf("반지름을 입력하시오:");
    scanf("%f", &r);
    answer = r*r*pi;
    printf("원의 면적:%f", answer);
    return 0;
}