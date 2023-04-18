#include <stdio.h>

int main()
{
    int a, b;

    for(a=1; a<=5; a++) // a=1인 상태로 b for문 실행 > * 출력 후 b=2가 됨 > 줄바꿈 출력 후 a=2가됨 > a가 5가 될 때 까지만 \n가 출력됨 > *도 1, 2, 3, 4, 5개 까지만 출력됨. a가 6일 땐 a for문이 종료됨.
    { 
        for(b=1; b<=a; b++)
        {
            printf("*"); // 여기 이후에 b가 커지고 밖으로 나감
        }
        printf("\n"); // 줄바꿈 출력 후 a가 커짐
    }
    return 0;
}