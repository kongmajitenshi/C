#include <stdio.h>

int main()
{
    int a,b,c;
    int num;
    
    printf("n층 다이아몬드:");
    scanf("%d", &num);

    for(a=0; a<num; a++) // a는 0 부터 (num-1) 까지 증가하면서 {b는 a 부터 (num-1) 까지 증가하면서 " " 출력, c는 0 부터 (a*2) 까지 증가하면서까지 "*" 출력}
    {
        for(b=a; b<num; b++)
        {
            printf(" ");
        }
        for(c=0; c<=2*a; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(a=num-1; a>0; a--) // a는 (num-1) 부터 0 까지 감소하면서 {b는 a부터 num 까지 감소하면서 " " 출력, c는 0부터 2(a-1) 까지 증가하면서 "*" 출력}
    {
        for(b=a; b<=num; b++)
        {
            printf(" ");
        }
        for(c=0; c<=(a-1)*2; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}