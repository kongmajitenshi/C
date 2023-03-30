#include <stdio.h>

int main(void)
{
    char ch;
    printf("문자를 입력하시오:");

    ch = getchar();
    if(ch>=65&&ch<=90)
    {
        printf("%c는 대문자 입니다.", ch);
    }
    else if (ch>=97&&ch<=122)
    {
        printf("%c는 소문자 입니다.", ch);
    }
    else if (ch>=48&&ch<=57)
    {
        printf("%c는 숫자 입니다.", ch);
    }
    else 
    {
        printf("%c는 기타 문자 입니다.", ch);
    }
    return 0;
}
