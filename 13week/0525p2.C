#include <stdio.h>

int main()
{
    int i=10;
    double f=12.3;
    int* pi = NULL; // 안해도 상관 없음.
    double* pf = NULL; // 안해도 상관 없음. 변수 0으로 초기화 해 주듯이 포인터는 NULL으로 초기화.
    pi = &i;
    pf = &f;

    printf("%p %p \n", pi, &i);
    printf("%p %p \n", pf, &f);

    return 0;
}