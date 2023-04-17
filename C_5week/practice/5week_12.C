#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b=1;

    printf("구구단 계산기:");
    scanf("%d", &a);

    loop:
    printf("%d * %d = %d\n", a, b, a*b );
    b++;
    if(b==10) goto end;
    goto loop;
    end:
    return 0;
}