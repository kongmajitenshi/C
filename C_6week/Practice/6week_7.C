#include <stdio.h>

int main()
{
    int big, small, r;
    printf("두 정수 입력(큰,작은):");
    scanf("%d %d", &big, &small);

    while(small !=0)
    {
        r = big % small;
        big = small;
        small = r;
    }
    printf("최대 공약수는 %d입니다. \n", big);

    return 0;
}