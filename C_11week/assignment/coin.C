#include <stdio.h>
#include <stdlib.h> // rand와 srand 함수를 사용하기 위해 사용
#include <time.h> // srand함수에서 난수에 time값을 주기 위함 

int coin_toss();

int main(void) 
{
  int toss;
  int heads = 0; // 동전의 앞면 값 초기화
  int tails = 0; // 동전의 뒷면 값 초기화
  srand((unsigned)time(NULL)); //time값을 srand 함수에 넘겨줌. 현재 시간은 항상 변하기 때문에 time 값을 srand 함수에 넣어주고, unsigend를 통해 음수값이 나오지 않도록 설정함. time(NULL)은 현재 시스템의 시간 정보를 불러오는 함수임.

  for( toss=0; toss<100; toss++) // 0~99회 까지 반복
    {
      if(coin_toss()==1){ // coin_toss 함수가 1이면 heads값 증가, 아니면 tails값 증가
      heads++;
      }
      else{
        tails++;
      }
    }
  printf("동전의 앞면 횟수 : %d\n", heads);
  printf("동전의 뒷면 횟수 : %d\n", tails);
  return 0;
}

int coin_toss(void)
{
  int head = rand() % 2; // rand함수로 생성된 난수를 2로 나누었을 때 나머지는 0 또는 1만 나옴. head값을 반환해준 뒤 main 함수 for문 에서 head값이 1일 땐 heads++; 실행, 0일 땐 tails++; 실행.
  return head;
}