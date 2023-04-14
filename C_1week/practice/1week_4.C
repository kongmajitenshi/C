#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double moneyrate, answer=0;
    int money;
    printf("환율을 입력하시오:");
    scanf("%lf", &moneyrate);
    printf("원화 금액을 입력하시오:");
    scanf("%d", &money);
    answer = money / moneyrate ;
    printf("원화 %d원은 %lf달러 입니다.", money, answer);
    return 0;
}