#include <stdio.h>

int main()
{
    int i;

    for(i=1; i<5; i++)
    {
        printf("%d", 2*i); // 출력은 2 4 6 8 
    }
    return 0;
}

// for(i=10; i>0; i=i-2) //
// {printf("Student %d\n", i);}//
// 출력은 Student10 Student8 Student6 Student4 Student2 // 