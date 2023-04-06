#include <stdio.h>

int main(void)
{
   int sum=0;
   int i=0;
   while(i<5)
   {
    int x;
    printf("값을 입력하시오:");
    scanf("%d", &x);
    sum += x;
    i++;
   }
   
   printf("합계는 %d입니다.", sum);
   return 0;
}