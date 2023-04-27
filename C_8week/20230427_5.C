#include <stdio.h>

int main()
{
    int a, b=1;

    printf("정수 입력:");
    scanf("%d", &a);

    while(b<10)
    {   
        printf(" %d * %d = %d", a, b, a*b);
        b++;
        printf("\n");
    }
    return 0;
}