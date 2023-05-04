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
    int result=1;

    for(int i=1; i<=n; i++)
    {
        result = result * i;
    }
   
   return result;
}

