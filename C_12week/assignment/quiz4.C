#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() // 학생 수 다섯명의 점수를 입력받고 평균값 구하는 코드 만들기
{
    int score, sum=0;
    float avg;
    int sco[5];

    for(int i=0; i<5; i++)
    {   
        printf("점수 입력: ");
        scanf("%d", &score);
        sco[i] = score;
        sum += sco[i];
    }
        avg = sum / 5;
        printf("평균: %f", avg);

    return 0;
    
}