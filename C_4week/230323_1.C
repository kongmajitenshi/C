#include <stdio.h>

int main(void)
{
    char code='A';
    printf("%d %d %d \n", code, code+1, code+2); //65 66 67 출력됨
    printf("%c %c %c \n", code, code+1, code+2); // A B C 출력됨
    return 0;
}