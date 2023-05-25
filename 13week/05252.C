#include <stdio.h>
//정보올림피어드 - 문제 - 비기너 - 수학1 - 1430:숫자의 개수
int main()
{
    int a, b, c, sum=0, count=0;
    int t[10] = {0,};

    printf("a, b, c 값 입력: ");
    scanf(" %d %d %d", &a, &b, &c);
    sum = a*b*c;
    printf("a*b*c=%d \n", sum);   

    while(1)
    { 
        count = sum%10;
        t[count] = t[count]+1;
        sum = sum/10;
        
        if(sum==0)
        {
            break;
        }
    }

    for(int i=0; i<10; i++)
    {
        printf("%d : %d회 \n", i, t[i]); 
    }
    return 0;
}