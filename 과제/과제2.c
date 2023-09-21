#include <stdio.h>

// �л� ���� �Է� �Լ�
void input(int n, int *korean, int *math, int *eng);
double average(int n, int *korean, int *math, int *eng);

int main() {
    int n;
    printf("�л� ���� �Է��ϼ���: ");
    scanf("%d", &n);

    int korean[n], math[n], eng[n];

    // �л����� ����, ����, ���� ���� �Է�
    input(n, korean, math, eng);

    // �� ���� ��� ���
    double koreanAvg = average(n, korean, math, eng);
    double mathAvg = average(n, math, korean, eng);
    double engAvg = average(n, eng, korean, math);

    // ��ü ��� ���
    double totalAvg = (koreanAvg + mathAvg + engAvg) / 3;

    // �� ���� ��� ���
    printf("���� ���: %.2lf\n", koreanAvg);
    printf("���� ���: %.2lf\n", mathAvg);
    printf("���� ���: %.2lf\n", engAvg);

    // ��ü ��� ���
    printf("����, ����, ���� ���: %.2lf\n", totalAvg);

    return 0;
}

// �л����� ����, ����, ���� ������ �Է¹޴� �Լ�
void input(int n, int *korean, int *math, int *eng) {
    int i;
    for (i = 0; i < n; i++) {
        printf("�л� %d�� ����, ����, ���� ������ �Է��ϼ���: ", i + 1);
        scanf("%d %d %d", &korean[i], &math[i], &eng[i]);
    }
}

// ���� ����� ����ϴ� �Լ�
double average(int n, int *subject, int *other1, int *other2) {
    double subjectSum = 0;
    
    int i;

    for (i = 0; i < n; i++) {
        subjectSum += subject[i];
    }

    return subjectSum / n;
}
