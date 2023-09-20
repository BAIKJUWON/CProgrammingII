#include <stdio.h>

// 함수 프로토타입 선언
int getint();
int power(int, int);

int main(void) {
    int x, y, result;

    // 사용자로부터 정수를 입력받음
    x = getint();
    y = getint();

    // x의 y 제곱을 계산
    result = power(x, y);

    // 결과 출력
    printf("%d\n", result);

    return 0;
}

// 정수를 입력받는 함수
int getint() {
    int a;
    printf("ENTER INT : ");
    scanf("%d", &a);
    return a;
}

// x의 y 제곱을 계산하는 함수
int power(int x, int y) {
    int i, r;
    r = 1;

    // 반복문을 사용하여 x의 y 제곱 계산
    for (i = 1; i <= y; i++)
        r = r * x;

    return r;
}