#include <stdio.h>

int main()
{
    int i, sum=0;

    for(i=1; i<=10; i++)
    {
        sum = sum + i;
    }
    printf("1부터 10까지 정수의 합: %d", sum);
    return 0;
}