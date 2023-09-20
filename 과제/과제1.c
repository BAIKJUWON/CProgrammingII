#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <math.h> // sqrt �Լ��� ����ϱ� ���� ��� ����

// �־��� �迭 a[]�� ����� ����ϴ� �Լ�
float Average(int a[], int n) {
    float sum; //���� �����ϱ� ���� ����
    int i;
    sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i]; //�迭 ��Ҹ� �ջ�
    }
    return sum / n; //��� ��� �� ��ȯ
}

// �־��� �迭 a[]�� ǥ�� ������ ����ϴ� �Լ�
float cstd(int a[], int n, float mean) {
    float Squ; // �������� �����ϱ� ���� ����
    int i;
    Squ = 0;
    for (i = 0; i < n; i++) {
        float diff = a[i] - mean; //��հ��� ���̸� ���
        Squ += diff * diff; //������ ������ ����
    }
    return sqrt(Squ / n); //�������� �������� ����Ͽ� ǥ�� ���� ��ȯ
}

int main(void) {
    int a[150]; //������ ������ �迭
    float avg, std1; //��հ� ǥ�� ������ ������ ����
    int i, n; //�ݺ����� ���� ������ �Է��� ������ ������ ������ ����

    printf("��� ���ڸ� �Է��Ͻó���? : ");
    scanf("%d", &n); //����ڷκ��� ������ ���� �Է� ����

    for (i = 0; i < n; i++) {
        printf("%d��° ���� �Է��ϼ��� : ", i + 1);
        scanf("%d", &a[i]); //����ڷκ��� ���� �Է� ����
    }

    avg = Average(a, n); //��� ���
    std1 = cstd(a, n, avg); //ǥ�� ���� ���

    printf("����� %f�Դϴ�.\n", avg); //��� ���
    printf("ǥ�������� %f�Դϴ�.\n", std1); //ǥ�� ���� ���

    return 0;
}
