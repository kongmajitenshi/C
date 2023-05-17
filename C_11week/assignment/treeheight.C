#define _CRT_SECURE_NO_WARNINGS 
#include <math.h>
#include <stdio.h>

int main(void) 
{
  double height, distance, tree_height, degrees, radians; // height, distance, degrees는 입력받는 값. radians, tree_height는 계산하여 결과가 나오는 값이므로 따로 초기화 하지 않음.
  
  printf("나무와의 길이(단위:m):");
  scanf("%lf", &distance); 
  
  printf("측정자의 키(단위:m):");
  scanf("%lf", &height); 
  
  printf("각도(단위:도):");
  scanf("%lf", &degrees);
  
  radians = degrees * (3.141592 / 180.0); // radians값 계산
  
  tree_height = tan(radians) * distance + height; // tree_height값 계산
  printf("나무의 높이는 %lfm\n", tree_height);
  
  return 0; 
}