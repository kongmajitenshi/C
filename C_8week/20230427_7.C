#include <stdio.h>

int main()
{
    int a,b,c;
    int num;
    
    printf("n층 피라미드:");
    scanf("%d", &num);

    for(a=1; a<=num; a++)
    {
        for(b=a; b<=num-1; b++)
        {
            printf(" ");
        }
        for(c=1; c<2*a; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}