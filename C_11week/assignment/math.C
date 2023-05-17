#include <stdio.h>
#include <math.h> // 수학 함수들을 포함함. 밑에 sin, cos도 포함되어있음.

int main()
{
  double pi=3.1415925635; // pi값 지정
  double x,y; // x,y 변수 선언

  x = pi/2; // x값 초기화
  y = sin(x); // y값 초기화. sin(pi/2)가 계산된 값이 y에 대입됨.
  printf("sin(%lf) = %f\n", x, y); // sin(x)와 그 결과값 출력
  y = cos(x); // y 값 다시 초기화. cos(pi/2)가 계산된 값이 y에 대입됨.
  printf("cos(%lf) = %f\n", x, y); // cos(x)와 그 결과값 출력. 
}
