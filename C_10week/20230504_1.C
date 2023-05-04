#include <stdio.h>

int main()
{
    int a,b,c;
    int num;

    printf("값:");
    scanf("%d", &num);

    for(a=0; a<num; a++) //피라미드
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

    for(a=0; a<num; a++) //역피라미드
    {
        for(b=a; b<num; b++)
        {
            printf(" ");
        } 
        for(c=num; c>=2*a; c--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}