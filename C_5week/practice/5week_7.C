#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int score;
    
    printf("성적 입력:");
    scanf("%d", &score);

    if(score>=90)
    {
        printf("학점 A");
    }
    else if(score>=80)
    {
        printf("학점 B");
    }
    else if(score>=70)
    {
        printf("학점 C");
    }
    else if(score>=60)
    {
        printf("학점 D");
    }
    else
    {
        printf("불합격");
    }
    
    return 0;
}