#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double temp;

    printf("기온을 입력하시오:");
    scanf("%lf", &temp);

    if (temp>0)
    {
        printf("현재 기온은 영상입니다.\n");
    }
    else if(temp==0)
    {
        printf("현재 기온은 0도 입니다.\n");
    }
    else
    {
        printf("현재 기온은 영하입니다.\n");
    }
    return 0;
}