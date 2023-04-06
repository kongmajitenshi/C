#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int s=1; s<=n-i; s++) // 공백
        {
            printf(" ");
        }
        for(int s=1; s<=i; s++) // 별
        {
            printf("*");
        }
      printf("\n");
    }
    return 0;
}