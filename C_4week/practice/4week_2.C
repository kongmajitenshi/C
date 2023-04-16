#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("두개의 정수를 입력하시오: ");
    scanf("%d%d", &x, &y);

    printf("x == y의 결과값: %d\n", x == y); // x y 같냐?
    printf("x != y의 결과값: %d\n", x != y); // x y다르냐? (!이 NOT임)
    printf("x > y의 결과값: %d\n", x > y); // x가 크냐?
    printf("x < y의 결과값: %d\n", x < y); // x가 작냐?
    printf("x >= y의 결과값: %d\n", x >= y); // x가 크거나 같냐?
    printf("x <= y의 결과값: %d\n", x <= y); // x가 작거나 같냐?

    return 0;
}