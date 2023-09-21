#include <stdio.h>

// 학생 성적 입력 함수
void input(int n, int *korean, int *math, int *eng);
double average(int n, int *korean, int *math, int *eng);

int main() {
    int n;
    printf("학생 수를 입력하세요: ");
    scanf("%d", &n);

    int korean[n], math[n], eng[n];

    // 학생별로 국어, 수학, 영어 점수 입력
    input(n, korean, math, eng);

    // 각 과목 평균 계산
    double koreanAvg = average(n, korean, math, eng);
    double mathAvg = average(n, math, korean, eng);
    double engAvg = average(n, eng, korean, math);

    // 전체 평균 계산
    double totalAvg = (koreanAvg + mathAvg + engAvg) / 3;

    // 각 과목 평균 출력
    printf("국어 평균: %.2lf\n", koreanAvg);
    printf("수학 평균: %.2lf\n", mathAvg);
    printf("영어 평균: %.2lf\n", engAvg);

    // 전체 평균 출력
    printf("국어, 수학, 영어 평균: %.2lf\n", totalAvg);

    return 0;
}

// 학생별로 국어, 수학, 영어 점수를 입력받는 함수
void input(int n, int *korean, int *math, int *eng) {
    int i;
    for (i = 0; i < n; i++) {
        printf("학생 %d의 국어, 수학, 영어 점수를 입력하세요: ", i + 1);
        scanf("%d %d %d", &korean[i], &math[i], &eng[i]);
    }
}

// 과목별 평균을 계산하는 함수
double average(int n, int *subject, int *other1, int *other2) {
    double subjectSum = 0;
    
    int i;

    for (i = 0; i < n; i++) {
        subjectSum += subject[i];
    }

    return subjectSum / n;
}
