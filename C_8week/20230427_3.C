#include <stdio.h>

int main()
{
    int a,b,c;

    for(a=0; a<5; a++) //
    {
        for(b=0; b<=a; b++)
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