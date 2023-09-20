#include <stdio.h>

// 팩토리얼 함수의 선언
long factorial(int n);

int main(void)
{
    int x = 0, result;

    // 사용자로부터 정수를 입력받음
    printf("정수를 입력하시오:");
    scanf_s("%d", &x);

    // 입력된 정수의 팩토리얼을 계산하여 결과 변수에 저장
    result = factorial(x);

    // 결과 출력
    printf("%d!은 %d입니다.\n", x, result);

    return 0;
}

// 재귀적으로 팩토리얼을 계산하는 함수
int factorial(int n)
{
    printf("factorial(%d)\n", n);

    // 종료 조건: n이 1 이하인 경우 1을 반환
    if (n <= 1)
        return 1;
    // 재귀 호출: n * (n-1)! 계산
    else
        return n * factorial(n - 1);
}