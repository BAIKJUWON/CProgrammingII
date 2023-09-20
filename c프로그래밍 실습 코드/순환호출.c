#include <stdio.h>

// ���丮�� �Լ��� ����
long factorial(int n);

int main(void)
{
    int x = 0, result;

    // ����ڷκ��� ������ �Է¹���
    printf("������ �Է��Ͻÿ�:");
    scanf_s("%d", &x);

    // �Էµ� ������ ���丮���� ����Ͽ� ��� ������ ����
    result = factorial(x);

    // ��� ���
    printf("%d!�� %d�Դϴ�.\n", x, result);

    return 0;
}

// ��������� ���丮���� ����ϴ� �Լ�
int factorial(int n)
{
    printf("factorial(%d)\n", n);

    // ���� ����: n�� 1 ������ ��� 1�� ��ȯ
    if (n <= 1)
        return 1;
    // ��� ȣ��: n * (n-1)! ���
    else
        return n * factorial(n - 1);
}