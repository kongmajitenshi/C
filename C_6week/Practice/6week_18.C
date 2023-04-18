#include <stdio.h>

int main()
{
    int money, year=0, rate;

    money = 1000000;

    rate = money * 10;

    while(1)
    {
        year++;
        money = money + (money*0.3);
        if( money > rate )                                        // money > 10*money 하면 12년이 나옴. money = money+0.3money 로 초기화된 상태에서 if문이 실행되기 때문임.
        {
            break;
        }
    }
    printf("%d년", year);
    return 0;
}