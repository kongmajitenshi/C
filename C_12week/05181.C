#include <stdio.h>

int main()
{
    int scores[5];
    int count=0;
    for(int i=0; i<5; i++)
    {
        count += 10;
        scores[i] = count;
        printf("scores[%d]=%d\n", i, scores[i]);
    }
    return 0;
}