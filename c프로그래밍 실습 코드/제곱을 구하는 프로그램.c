#include <stdio.h>

// �Լ� ������Ÿ�� ����
int getint();
int power(int, int);

int main(void) {
    int x, y, result;

    // ����ڷκ��� ������ �Է¹���
    x = getint();
    y = getint();

    // x�� y ������ ���
    result = power(x, y);

    // ��� ���
    printf("%d\n", result);

    return 0;
}

// ������ �Է¹޴� �Լ�
int getint() {
    int a;
    printf("ENTER INT : ");
    scanf("%d", &a);
    return a;
}

// x�� y ������ ����ϴ� �Լ�
int power(int x, int y) {
    int i, r;
    r = 1;

    // �ݺ����� ����Ͽ� x�� y ���� ���
    for (i = 1; i <= y; i++)
        r = r * x;

    return r;
}