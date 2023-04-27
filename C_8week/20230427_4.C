#include <stdio.h>

int main()
{
    int a,b,c,d;

    for(a=1; a<=5; a++) //
    {
        for(b=4; b>=a; b--)
        {
            printf(" ");
        }

        for(c=1; c<=2*a-1; c++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(a=1; a<=5; a++)
    {
        for(b=0; b<a; b++)
        {
            printf(" ");
        }

        for(c=5; c>=2*a-3; c--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}