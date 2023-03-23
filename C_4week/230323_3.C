#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int money, money_put, result;
    int c1000, c500, c100;
 
    printf("물건 값을 입력하시오:");
    scanf("%d", &money);

    printf("투입한 금액을 입력하십시오:");
    scanf("%d", &money_put);
    result = money - money_put; // 거스름돈

    c1000 = result / 1000;
    result = result % 1000;

    c500 = result / 500;
    result = result % 500;

    c100 = result / 100;
    result = result % 100;
    
}