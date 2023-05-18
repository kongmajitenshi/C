#include <stdio.h>
#include <math.h>
#define PI 3.141592

double rad(double degree)
{
    return PI * degree / 180.0; // rad값 구해주는 함수
}

void drawbar(double height) // 교안 출력 결과와 실제 출력 결과가 달라서 double형으로 변경해보았으나 차이가 없었음.
{
    for (int i = 0; i < height; i++)
    {   printf("*");    }
    printf("\n");
}

int main(void)
{
    int degree, x, y;

    for (degree = 0; degree <= 90; degree += 10) // 싸인값은 -1.0에서 1.0이므로 정수로 반올림하여서 증폭한다. 
        //degree 값을 180도까지 해주어야 정상적으로 출력됨. sin함수 한 사이클이 360도이므로 90도까지 설정 시 1/4만 출력됨
    { 
        y = (double)(60 * sin(rad((double)degree)) + 0.5); // 교안 출력 결과와 실제 출력 결과가 달라서 double형으로 변경해보았으나 차이가 없었음.
        drawbar(y); 
    }

    return 0;
} // degree값이 잘못되어서 출력이 이상하게 되었음
