#include <stdio.h>

int main()
{
    int a, b, c;

    for(a=1; a<=100; a++)
    {
        for(b=1; b<=100; b++)
        {
            for(c=1; c<=100; c++)
            {
                if(a*a + b*b == c*c)
                {
                    printf("변a=%d, 변b=%d, 변c=%d\n", a, b, c);
                    
                }
            }
        }
    }
    return 0;
}