#include <stdio.h>

int main()
{
    int num[5];

    printf("정수 5개 입력: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("입력된 정수: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    printf("입력된 정수의 역순: ");
    for(int i=4; i>=0; i--)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    //문제: 정수 5개를 입력받아서 순서대로 출력하고 역순으로 출력하는 함수 작성
}