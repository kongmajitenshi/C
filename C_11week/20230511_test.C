#include <stdio.h>

int main()
{
    int a=0;

    printf("a:%d\n", a); // 이 때 a값은?
    printf("a:%d\n", a++); // 이 때 a값은?
    printf("a:%d\n", ++a); // 이 때 a값은?

    return 0;
}