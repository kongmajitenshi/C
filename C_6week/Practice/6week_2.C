#include <stdio.h>

int main()
{
    int n;
    printf("------ \n n의 n제곱 \n ------ \n");

    n=1;
    while(n<=10)
    {
        printf("%d    %d\n", n, n*n);
        n++;
    }
    return 0;
}