#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <math.h> // sqrt 함수를 사용하기 위한 헤더 파일

// 주어진 배열 a[]의 평균을 계산하는 함수
float Average(int a[], int n) {
    float sum; //합을 저장하기 위한 변수
    int i;
    sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i]; //배열 요소를 합산
    }
    return sum / n; //평균 계산 및 반환
}

// 주어진 배열 a[]의 표준 편차를 계산하는 함수
float cstd(int a[], int n, float mean) {
    float Squ; // 제곱합을 저장하기 위한 변수
    int i;
    Squ = 0;
    for (i = 0; i < n; i++) {
        float diff = a[i] - mean; //평균과의 차이를 계산
        Squ += diff * diff; //차이의 제곱을 누적
    }
    return sqrt(Squ / n); //제곱합의 제곱근을 계산하여 표준 편차 반환
}

int main(void) {
    int a[150]; //정수를 저장할 배열
    float avg, std1; //평균과 표준 편차를 저장할 변수
    int i, n; //반복문을 위한 변수와 입력할 정수의 개수를 저장할 변수

    printf("몇개의 숫자를 입력하시나요? : ");
    scanf("%d", &n); //사용자로부터 정수의 개수 입력 받음

    for (i = 0; i < n; i++) {
        printf("%d번째 수를 입력하세요 : ", i + 1);
        scanf("%d", &a[i]); //사용자로부터 정수 입력 받음
    }

    avg = Average(a, n); //평균 계산
    std1 = cstd(a, n, avg); //표준 편차 계산

    printf("평균은 %f입니다.\n", avg); //평균 출력
    printf("표준편차는 %f입니다.\n", std1); //표준 편차 출력

    return 0;
}
