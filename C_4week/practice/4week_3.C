#include <stdio.h>

int main(void)

{
    int x, y;
    int result;
    
    printf("x값과 y값 입력:");
    scanf("%d%d", &x, &y);
    
    result = 2 > 3 || 6 > 7;
    printf("%d\n", result);

    result = 2 || 3 && 3 > 2;
    printf("%d\n", result);

    result = x = y = 1;
    printf("%d\n", result);

    result = - ++x + y--;
    printf("%d\n", result);

    return 0;
}
