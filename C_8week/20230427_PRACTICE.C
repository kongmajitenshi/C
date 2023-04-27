#include <stdio.h>

int main()
{
    int num1, num2=2, num3, num4;

    num3 = num1++;
    num4 = num2++;

    printf("%d %d", num3, num4);
    return 0;
}
