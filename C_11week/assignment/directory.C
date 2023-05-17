#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("dir"); // 운영체제의 명령 프롬포트에게 명령어 전달 후 실행하는 함수. dir은 현재 디렉토리의 파일과 폴더 목록 출력함.
    printf("press any key\n");
    getchar(); // _getch();가 동작하지 않아서 getchar으로 변경.
    system("cls"); // cls는 콘솔 화면을 지움.

    return 0;
}