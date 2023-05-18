#include <stdio.h>

int main()
{
    int s, e;

    while (1)
    {   
        printf("시작과 끝 입력:");
        scanf("%d %d", &s, &e);
        if((s>=2 && s<=9) && (e>=2 && e<=9))
        {
            if(s<e)
            {
                for(int i=1; i<=9; i++) // 겹치니까 밖으로 빼서 if(s<e)else 를 한 번에 묶을 수 있음
                    {
                        for(int j=s; j<=e; j++)
                        {
                            printf("%d * %d = %2d   ", j, i, j*i);
                        }
                        printf("\n");
                    }
            }
            else
            {
                for(int i=1; i<=9; i++)
                    {
                        for(int j=s; j>=e; j--)
                        {
                            printf("%d * %d = %2d   ", j, i, j*i);
                        }
                        printf("\n");
                    }
            }
            break;
        }
        else
        {
            printf("INPUT ERROR!\n");
        }

    }
}