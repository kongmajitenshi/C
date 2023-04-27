#include <stdio.h>

int main()
{
    int a,b,c;

    for(a=1; a<=5; a++) // a=1 일 때 b=4321 432 43 4 && c= 1 12 123 1234 12345
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
    return 0;
}