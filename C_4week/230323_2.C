#include <stdio.h>

int main(void)
{
    double x,y,result;

    printf("두 개의 실수를 입력하시오:");
    scanf("%lf %lf", &x, &y);

    result = x+y; //덧셈  연산 해서 결과를 result에 대입
    printf(" %f + %f = %f", x, y, result);
    printf("\n");

    result = x-y; //뺄셈  연산 해서 결과를 result에 대입
    printf(" %f - %f = %f", x, y, result); 
    printf("\n");

    result = x*y; //곱셈  연산 해서 결과를 result에 대입
    printf(" %f * %f = %f", x, y, result);
    printf("\n");

    result = x/y; //나눗셈  연산 해서 결과를 result에 대입
    printf(" %f / %f = %f", x, y, result);
    printf("\n");
    
    return 0;
}