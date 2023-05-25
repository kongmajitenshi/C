#include <stdio.h>

int main()
{
    int i=10;
    int* pi=&i;

    printf(" i = %d, pi = %p \n", i, pi);

    (*pi)++;
    printf(" i = %d, pi = %p \n", i, pi);

    *pi++;
    printf(" i = %d, pi = %p \n", i, pi); // int형이라 주소값이 4byte 늘어남

    return 0;

}