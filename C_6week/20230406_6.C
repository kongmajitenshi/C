#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int answer = rand()%100;
    int guess;
    int tries=0;
    do
    {
        printf("숫자를 입력하시오:");
        scanf("%d", &guess);
        tries++;
        if(guess>answer)
        {
            printf("DOWN\n");
        }
        if(guess<answer)
        {
            printf("UP\n");
        }
    } while (guess !=answer);
    printf("축하합니다!, 시도 횟수:%d", tries);
    
    return 0;

    
}