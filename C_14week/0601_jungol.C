//문제 > 단계별 > 비기너 > 문자열 > 문자열찾기#2514
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[10001];
    int i, KOI=0, IOI=0;
    printf("문자 입력: ");
    scanf("%s", arr);

    for(i=0; i<strlen(arr)-2; i++)
    {   
        // if(arr[i]=='K' && arr[i+1]=='O' && arr[i+2]=='I')
        // {
        //     KOI ++;
        // }
        // else if(arr[i]=='I' && arr[i+1]=='O' && arr[i+2]=='I')
        // {
        //     IOI ++;
        // } 여기 부분이 빈칸으로 뚫어서 시험 문제 나올 수도 있음
    }

    printf("KOI = %d개 \nIOI = %d개", KOI, IOI);
}