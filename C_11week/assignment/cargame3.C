#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

void disp_car(int car_number, int distance);

int main()
{
  int i; // for문에서 i값 초기화 할거라 안해도 됨
  int car1_dist=0, car2_dist=0, car3_dist=0; 

  srand((unsigned)time(NULL)); // 난수 발생기

  for(i=0; i<6; i++)
    {
      car1_dist += rand()%100; // car1_dist = car1_dist + rand()%100; 과 동일
      car2_dist += rand()%100; // car2_dist = car2_dist + rand()%100; 과 동일
      car3_dist += rand()%100;
      disp_car(1, car1_dist); // disp_car(int car_number, int distance) 함수에서 int car_number 자리에 1, int distance 자리에 car1_dist 값 대입
      disp_car(2, car2_dist); // disp_car(int car_number, int distance) 함수에서 int car_number 자리에 2, int distance 자리에 car2_dist 값 대입
      disp_car(3, car3_dist);
      printf("--------------------\n");
      _getch(); // <conio.h> 헤더 파일에 정의됨. 키보드에서 입력한 문자 받는 함수.
    }
  return 0;
}

void disp_car(int car_number, int distance)
{
  int i; // for문에서 i값 초기화 예정
  printf("CAR #%d:", car_number); // main함수에서 받는 1, 2 단순 출력. 밑 for문에서 별 찍을거임.
  for(i=0; i<distance/10; i++) // main 함수에서 받는 car1_dist, car2_dist를 10으로 나눈 값과 같거나 커질 때 까지 반복.
    {
      printf("*"); 
    }
  printf("\n");
}