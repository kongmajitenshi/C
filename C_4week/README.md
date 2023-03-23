# 2023-03-23 4주차 C언어 실습 
깃허브 md 파일은 html이랑 같은 언어 사용함 맞나?

```c 
#include <stdio.h>

int main(void)
{
    char code='A';
    printf("%d %d %d \n", code, code+1, code+2); //65 66 67 출력됨
    printf("%c %c %c \n", code, code+1, code+2); // A B C 출력됨
    return 0;
}
```
