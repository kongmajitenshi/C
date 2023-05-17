#include <stdio.h>
#include <math.h> // sin, log10 등을 계산하기 위해 사용

int menu(void) // n 값 입력받아서 n 값 그대로 돌려줌
{
    int n; 
    printf("1.팩토리얼\n");
    printf("2.싸인\n");
    printf("3.로그(base 10)\n");
    printf("4.제곱근\n");
    printf("5.순열(nPr)\n");
    printf("6.조합(nCr)\n");
    printf("7.종료\n");
    printf("선택해주세요: ");
    scanf("%d", &n);
    return n;
}

void factorial()  // 팩토리얼 계산 함수
{
    long long n, result=1, i; // longlong은 signed가 앞에 생략된 형태

    printf("정수를 입력하시오: ");
    scanf("%lld", &n);
    
    for (i = 1; i <= n; i++)
    { result = result *i; }

    printf("결과 = %lld\n\n", result);
}

void sine() // sin 계산 함수
{
    double a, result;

    printf("각도를 입력하시오: ");
    scanf("%lf", &a); // 정수형 double 이라서 lf로 받음

    result = sin(a);

    printf("결과 = %lf\n\n", result);
}

void logBase10() // log10 계산 함수
{
    double a, result; 
    
    printf("실수값을 입력하시오: ");
    scanf("%lf", &a); // 정수형 double 이라서 lf로 받음
    
    if (a <= 0.0) //a가 0 혹은 음수이면 오류 출력
    {   printf("오류\n");   }
    else // a가 0보다 크다면 log10(a) 계산 후 결과로 출력
    {
        result = log10(a); 
        printf("결과 = %lf\n\n", result); 
    }
}

int main(void)
{
    while (1) { 
        switch (menu()) 
        {
        case 1: // 1 들어오면 factorial 함수 실행 후 break;
            factorial();
            break;
        case    2: // 2 들어오면 sine 함수 실행 후 break;
            sine();
            break;
        case 3: // 3 들어오면 logBase10 함수 실행 후 break;
            logBase10();
            break;
        case 7: // 7 들어오면 실행 종료
            printf("종료합니다.\n");
            return 0;
        default: // 1, 2, 3, 7 이외의 값이 들어오면 종료
            printf("잘못된 선택입니다.\n");
            break;
        }
    }
}