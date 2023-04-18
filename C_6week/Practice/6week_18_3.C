#include <stdio.h>

int main()
{
    int money, year=0;

    printf("금액 입력:");
    scanf("%d", &money);

    int condition=money*10;

    while(money < condition)
    {
        year++;
        money = money + (money*0.3);
    }

    printf("%d년", year); // 금액 입력 받고 계산해줌
    return 0;
}