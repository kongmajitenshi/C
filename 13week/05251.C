#include <stdio.h>

int main()
{
    int a=150, b=266, c=427, sum=0, count=0;
    int t[10] = {0,};
    sum = a*b*c;

    printf("a*b*c=%d \n", sum);
    // sum = a*b*c;
    // printf("a*b*c = %d \n", sum);

    // count = sum%10;
    // printf("count = %d \n", count);

    // t[count] += 1;
    // printf("t[count] = %d \n", t[count]);

    while(1)
    { 
        count = sum%10;
        t[count] = t[count]+1;

        sum = sum/10;
        

        if(sum==0)
        {
            break;
        }
        
    }

    for(int i=0; i<10; i++)
    {
        printf("%d가 쓰인 횟수 : %d \n", i, t[i]); 
    }
    
}