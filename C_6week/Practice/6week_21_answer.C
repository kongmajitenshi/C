#include <stdio.h>

int main()
{
    char letter;

    while(1)
    {
        printf("소문자 입력:");
        scanf("%c", &letter);

        if(letter=='Q')
        { break; }
        
        if(letter<'a' || letter>'z')
        { continue; }
        
        letter = letter - 32;
        printf("변환된 대문자는 %c입니다.\n", letter);
    }
    
    return 0;
}