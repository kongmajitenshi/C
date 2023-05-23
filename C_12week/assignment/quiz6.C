#include <stdio.h>

int main()
{
  int num=10, sum=0;
  int arr[num];

  for(int i=0; i<num; i++)
  {
    arr[i]=0;
  }
  return 0;
}
//arr[num]을 모두 0으로 초기화 하는 함수이다. 이 함수 오류의 원인이 되는 부분을 찾고, 올바르게 수정해라.