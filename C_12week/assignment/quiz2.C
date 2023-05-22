#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int stu, score;
    int sco[30];

    printf("학생 수 입력(최대 30명): ");
    scanf("%d", &stu);

    for(int i=0; i<stu; i++)
    {   
        printf("점수 입력: ");
        scanf("%d", &score);
        /*sco[i] = score;
        printf("sco[%d]에 입력된 점수: %d \n", i, sco[i]);*/ //sco[i]에 score를 입력받은 후 확인하는 문장 만들기(만들어둔거임)
    }
    
    return 0;
    
}