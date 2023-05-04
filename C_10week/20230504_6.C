#include <stdio.h>

int main()
{
    for(int a=1; a<=5; a++)
    {
        for(int c=5; c>a; c--) //for(int c=1; c<=5-a; c++)
        {
            printf(" ");
        }
        for(int b=1; b<=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
}