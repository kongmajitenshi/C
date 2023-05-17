#include <stdio.h>
#include <time.h>

int main()
{
  time_t start, end; // time_t는 unsigned long과 동일.
  start = time(NULL); // 시작 시 현재 시각 저장
  printf("10초가 되면 아무 키나 누르세요\n");
  while(1) // 입력받으면 종료하는 문장. 입력 받기 전까진 종료 x
    {
      if (getchar()) // if문으로 입력받을시 break;를 만나 while문을 빠져나가고 밑 printf문으로 감.
      { break; }
    }
  printf("종료되습니다. \n");
  end = time(NULL); // 종료 시 현재 시각 저장
  printf("경과된 시간은 %d초 입니다.", (end - start)); // 종료 시 시각 - 시작 시 시각을 하여 흐른 시간 출력
  return 0;
} 