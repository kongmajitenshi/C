#include <stdio.h>

int main(void)

{
    int x=5, y=7;
    int result=0, sum=0;
    
    result = - ++x + y--;
    printf("%d\n", result);
    printf("%d\n", y);

    sum=result+y;
    printf("%d", sum);

    return 0;
}
