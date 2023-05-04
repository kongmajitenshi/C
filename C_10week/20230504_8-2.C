#include <stdio.h>

int get_integer();
int fact(int n);

int main()
{
    int n;
    printf ("팩토리얼 값:");
    scanf("%d", &n);

    printf("%d!의 값은 %d 입니다. \n", n, fact(n));
}

int get_integer(void)
{
    int value;
    printf("정수 입력:");
    scanf("%d", &value);

    return value;
}

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1); // n=4 라고 할 때, 4*3*2*1이 됨. 4일 땐 n*fact(n-1)*fact(n-2)*fact(n-3) 까지 돌아감 > 4*3*2*1
    }
}

