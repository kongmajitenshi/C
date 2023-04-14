#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double w, h, area=0, perimeter=0;
    printf("사각형의 가로 길이와 세로 길이를 입력하세요:");
    scanf("%lf %lf", &w, &h);
    area = w * h;
    perimeter = 2*(w+h);
    printf("사각형의 넓이:%lf \n 사각형의 둘레:%lf", area, perimeter);
    return 0;
}