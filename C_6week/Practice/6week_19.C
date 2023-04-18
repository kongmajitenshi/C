#include <stdio.h>
#include <math.h>

int main()
{
    double a;

    

    while(a>=0.0)
    {
        printf("실수값 입력(음수 입력시 종료):");
        scanf("%lf", &a);
        if(a<0.0)
        {
            break;
        }
        printf("%lf의 제곱근은 %lf입니다.\n", a, sqrt(a));
    }
    return 0;
}