#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//strcmp(A,B) > A와 B를 비교해서 참이면 0 반환

int* solution(char* shirt_size[], int shirt_size_len)
{
    int* answer = (int*)malloc(sizeof(int)*6); // 동적(직접) 메모리 공간 할당. 잘 써야 좋음.
    for(int i=0; i<6; i++)
    {
        answer[i]=0;
    }
    for(int i=0; i<shirt_size_len; i++)
    {
        if(strcmp(shirt_size[i],"XS")==0)
            answer[0]++;
        else if(strcmp(shirt_size[i],"S")==0)
            answer[1]++;
        else if((strcmp(shirt_size[i],"M")==0))
            answer[2]++;
        else if(strcmp(shirt_size[i],"L")==0)
            answer[3]++;
        else if(strcmp(shirt_size[i],"XL")==0)
            answer[4]++;    
        else if(strcmp(shirt_size[i],"XXL")==0)        
            answer[5]++;
    }
    return answer;
}

int main()
{
    char* shirt_size[]={"XS", "S", "M", "L", "XL", "XXL"}; // 1, 2, 0, 2, 1, 0
    int shirt_size_len=6;
    int* ret = solution(shirt_size, shirt_size_len);

    printf("Solution: return value of the function is {");
    for(int i=0; i<6; i++)
        {
            if(i != 0)
            {
                printf(", ");
            }
            printf("%d", ret[i]);
        }
    printf("} . \n");
}