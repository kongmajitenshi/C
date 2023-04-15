#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x, y;
    printf("x값 입력:");
    scanf("%d", &x);
    y=(x*x)-(5*x)+6;
    printf("값:%d", y);
    return 0;

}