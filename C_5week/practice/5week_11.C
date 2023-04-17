#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, result;
    char op;

    printf("수식 입력:");
    scanf("%d %c %d", &a, &op, &b);

    switch(op)
    {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        default: printf("지원되지 않는 연산자\n"); break;
    }
    printf("%d %c %d = %d", a, op, b, result);
    return 0;
}