#include <stdio.h>

int main()
{
    int n, score;
    double sum, avg;
    
    printf("종료하려면 음수 입력 \n");

    sum=0, avg=0, n=0;
    while(score>=0)
    {
        printf("성적 입력:");
        scanf("%d", &score);
        sum = sum + score; // score 값 한번씩더해줌
        n++; // 아래에서 n으로 score 값 나눠줄거라 키워줘야함
    }
    sum = sum - score; // scanf로 score 값 입력받으니 마지막에 더해준 음수값 빼줌
    n--; // 종료할 때에도 n이 한 번 늘어나니 다시 줄여줌
    avg = sum / n; 
    printf("평균은 %lf입니다.", avg);
    return 0;
}