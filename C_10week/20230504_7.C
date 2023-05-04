#include <stdio.h>

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

int main()
{
    int x,y;
    x = get_integer();
    y = get_integer();

    printf("%d + %d = %d", x, y, add(x,y));

    return 0;

}

