#include <stdio.h>

int main()
{
    char letter;

    while((letter!='Q'))
    {
        printf("소문자 입력:");
        scanf("%c", &letter);

        while ((letter<'a'||letter>'z'))
        {
            letter = letter - 32;
            printf("변환된 대문자는 %c입니다.\n", letter);
        }
    }
    return 0;
} // break 와 continue 없이 가능? 잘 모르겠다