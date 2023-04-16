#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int size;
    
    printf("컵 사이즈 입력:");
    scanf("%d", &size);

    if(size>=200)
    {
        printf("LARGE");
    }
    else if(size>=100)
    {
        printf("MEDIUM");
    }
    else 
    {
        printf("SMALL");
    }
    return 0;
}