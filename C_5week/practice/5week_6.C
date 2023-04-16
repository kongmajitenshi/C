#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;

    printf("값을 입력하시오:");
    scanf("%d", &n);

    if(n>=100)
    {
        printf("large\n");
    }
    else
    {
        printf("small");
    }
    
    return 0;
}