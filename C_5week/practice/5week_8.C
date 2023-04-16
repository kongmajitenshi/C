#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char abc;

    printf("문자입력:");

    abc=getchar();
    if(abc>='A' && abc<='Z')
    {
        printf("%c는 대문자\n", abc);
    }
    else if(abc>='a' && abc<='z')
    {
        printf("%c는 소문자\n", abc);
    }
    else if(abc>='0' && abc<='9')
    {
        printf("%c는 숫자\n", abc);
    }
    else
    {
        printf("%c는 ???\n", abc);
    }
    return 0;
}