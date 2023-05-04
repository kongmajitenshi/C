#include <stdio.h>

int get_integer(void);
int add(int x, int y);
int minus(int x, int y);
int multi(int x, int y);
int div(int x, int y);

int main()
{
    int x,y;
    x = get_integer();
    y = get_integer();

    printf("%d + %d = %d\n", x, y, add(x,y));
    printf("%d - %d = %d\n", x, y, minus(x,y));
    printf("%d * %d = %d\n", x, y, multi(x,y));
    printf("%d / %d = %d\n", x, y, div(x,y));

    return 0;
}

int get_integer(void)
{
    int value;
    printf("정수 입력:");
    scanf("%d", &value);

    return value;
}

int add(int x, int y)
{
    return x + y ;
}

int minus(int x, int y)
{ 
    return x-y; 
}

int multi(int x, int y)
{
    return x*y;
}

int div(int x, int y)
{
    return x/y;
}
