#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double light_speed=300000, sun_earth=149600000;
    double time;

    printf("빛의 속도는 %lfkm/s \n", light_speed);
    printf("태양과 지구와의 거리 %lfkm \n", sun_earth);

    time = sun_earth/light_speed;
    
    printf("도달 시간은 %lf초", time);

    return 0; 
    
}