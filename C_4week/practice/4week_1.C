#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int money, price, jandon1000=0, jandon500=0, jandon100=0, jandon=0;
    printf("물건 값을 입력하시오:");
    scanf("%d", &price);
    printf("투입한 금액을 입력하시오:");
    scanf("%d", &money);

    jandon = money - price; // 거스름돈

    jandon1000 = jandon / 1000; // 천원권 ?장인가
    jandon = jandon % 1000; // 잔돈 얼마남았나

    jandon500 = jandon / 500; // 위 잔돈에서 500원 ?개 필요한지 계산
    jandon = jandon % 500; // 500원 동전 분배 후 남은 잔돈

    jandon100 = jandon / 100; // 100원 개수 계산
    jandon = jandon % 100; // 남은 잔돈 계산

    printf("\n천원권 %d장\n", jandon1000);
    printf("\n오백원 동전 %d개\n", jandon500);
    printf("\n백원 동전 %d개\n", jandon100);

    return 0;
}