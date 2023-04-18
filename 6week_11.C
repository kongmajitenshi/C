#include <stdio.h>

int main()
{
    int i, num;

    printf("정수를 입력하시오(반복횟수):");
    scanf("%d", &num);

    printf("--------------------\nnum와 num세제곱\n--------------------\n");
    for(i=1; i<=num; i++)
    {
        printf("%d %d\n", i, i*i*i);
    }
    return 0;
}