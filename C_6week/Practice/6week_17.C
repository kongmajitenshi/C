#include <stdio.h>

int main()
{
    int a, b;
    
    for(a=1; a<=6; a++)
    {
        for(b=a; b<=6; b++)
        {
            if(a+b==6)
            {
                printf("(%d,%d)\n", a, b);
            }
        }
    }
    return 0;
}