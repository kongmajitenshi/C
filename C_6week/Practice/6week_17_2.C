#include <stdio.h>

int main()
{
    int a, b, c;
    
    for(a=1; a<=6; a++)
    {
        for(b=a; b<=6; b++)
        {
            for(c=b; c<=6; c++)
            {
                if( a + b + c == 10)
                {
                printf("(%d,%d,%d)\n", a, b, c);
                }
            }
        }
    }
    return 0;
}