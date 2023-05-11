#include <stdio.h>

int get_integer(void)
{   
    int n;
    printf("정수 입력:");
    scanf("%d", &n);
    return n;
}

int is_prime(int n)
{
    int counter=0;
    for(int i=1; i<=n; i++)
    {   
        counter=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                counter ++;
            }
        }
        if(counter==2)
        {
            printf("%d는(은) 소수다.\n", i);
        }
    }
    return n;
}

int main()
{
    int i,n, counter;

    n = get_integer();

    is_prime(n);

}