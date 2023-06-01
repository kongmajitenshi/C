#include <stdio.h>

int main()
{
    int a=6;
    a = ~a; // NOT, 1의  보수
    a = a + 0x01; // 1의 보수 + 1 = 2의 보수
    printf("a=%d", a);
}