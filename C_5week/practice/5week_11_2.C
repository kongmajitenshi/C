#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, result=0;
    char op;

    printf("수식 입력:");
    scanf("%d %c %d", &a, &op, &b);

    if(op=='+')
    {
        result = a + b;
    }
    else if(op=='-')
    {
        result = a - b;
    }
    else if(op=='*')
    {
        result = a * b;
    }
    else if(op=='/')
    {
        result = a / b;
    }
    else
    {
        printf("지원되지 않는 연산자입니다.\n");
        return 0;
    }

    printf("%d %c %d = %d", a, op, b, result);
    return 0;
}