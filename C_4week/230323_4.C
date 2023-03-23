#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, re;
    int n1, n10, n100;

    scanf("%d %d", &a, &b);

    n1 = a*(b%10);
    n10 = a*(b/10%10);
    n100 = a*(b/100);

    printf("%d\n", n1);
    pritnf("%d\n", n10);
    printf("%d\n", n100);
}