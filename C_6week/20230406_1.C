#include <stdio.h>

int main(void)
{
    int n;
    int i=1;

    printf("출력하고 싶은 단을 입력하시오:");
    scanf("%d", &n);

    while(i<=9)
    {
        int re;
        re = n * i;
        printf("%d * i = %d", &n, &re);
        i++;
    }
    
    return 0;
}