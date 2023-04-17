#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL)); // 난수 발생기 시드 설정
    int answer = rand()%100; 
    int n, tries=0;

    do //반복구조 while(n!=answer) << n과 answer 값이 다른동안 반복해라. 같아지면 종료
    {
        printf("정답 입력:");
        scanf("%d", &n);
        tries++;
        if(n<answer)
        {
            printf("UP\n");
        }
        if(n>answer)
        {
            printf("DOWN\n");
        }
    } while (n!=answer);
    printf("축하합니다! 시도 횟수:%d \n", tries);
    return 0;
}