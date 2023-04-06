#include <stdio.h>

int main(void)
{
    int i=1, sum=0, n, a, b;
    scanf("%d", &n);
    
    while(i<=n)
    {
        scanf("%d %d", &a, &b);
        printf("%d + %d = %d", a, b, a+b);
        i++;
    }
    return 0;
}