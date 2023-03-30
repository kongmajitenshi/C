#include <stdio.h>

int main(void)
{
    char op;
    int a, b, c;
    printf("수식을 입력하시오(예2:+5)>>");
    scanf("%d %c %d", &a, &op, &b);
    
    switch(op)
    {
        case '+' : c = a + b;
        break;
        case '-' : c = a - b;
        break;
        case '*' : c = a * b;
        break;
        case '/' : c = a / b;
        break;
        case '%' : c = a % b;
        break;
        default :
        printf("지원되지 않는 연산자 입니다\n");
        break;
    }
    printf("%d %c %d = %d\n", a, op, b, c);
    return 0;
}