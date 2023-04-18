#include <stdio.h>

int main()
{
    int money, year=0;

    money = 1000000;

    int ija = money*10;

    while(money < ija)
    {
        year++;
        money = money + (money*0.3);
    }

    printf("%d년", year);
    return 0;
}