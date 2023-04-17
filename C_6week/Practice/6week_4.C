//n이하의 모든 짝수 합

#include <stdio.h>

int main()
{
    int a, b, sum; // b에다 입력받을거임.
    printf("정수 입력:");
    scanf("%d", &b);
    
    sum=0, a=0;
    while(a<=b)
    {
        sum = sum + a;
        a = a + 2;
    }
    printf("1부터 %d까지의 짝수합은 %d입니다.", b, sum);
    return 0;
}

//while(i <= n)

// sum = sum + i; // sum = sum + i;와 같다.
// i = i + 2;
 