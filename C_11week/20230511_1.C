#include <stdio.h>

int solution(int price, char grade)
{
    int answer = 0;
    if(grade=='S')
    {
        answer = price * 0.95;
    }
    if(grade=='G')
    {
        answer = price * 0.9;
    }
    if(grade=='V')
    {
        answer = price * 0.85;
    }
    return answer;
}

int main()
{
    int price;
    char grade;

    printf("가격 입력:");
    scanf("%d", &price);


    printf("등급 입력:");
    scanf(" %c", &grade);

    printf("\n입력된 가격:%d \n입력된 등급:%c\n", price, grade);

    printf("최종 가격:%d", solution(price, grade));

    return 0;
}