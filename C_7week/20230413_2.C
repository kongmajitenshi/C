```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int x, int y) // int이므로 정수 반환함
{
    return (x>y) ? x : y ;
}

int main()
{
    int x, y, larger;
  
    printf("정수 2개를 입력하시오:");
    scanf("%d %d", &x, &y);
  
    larger=max(x,y);
    printf("더 큰 값은 %d입니다.\n", larger);
  
    return 0;
}
```
