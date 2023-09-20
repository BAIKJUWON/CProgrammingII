#include <windows.h> // Windows �׷��� ���̺귯���� ����ϱ� ���� ��� ����
#include <stdlib.h>  // ������ ����ϱ� ���� ��� ����
#include <stdio.h>

// ���� �׸��� �Լ�
void line(HDC hdc, int x1, int y1, int x2, int y2) {
    MoveToEx(hdc, x1, y1, NULL); // �������� (x1, y1)�� �̵�
    LineTo(hdc, x2, y2);         // (x1, y1)���� (x2, y2)���� �� �׸���
}

// �־��� ���� ������ ������ �����ϴ� �Լ�
int randint(int x1, int x2) {
    return x1 + rand() % (x2 - x1); // x1�� x2 ������ ������ ���� ����
}

int main(void) {
    int i;
    HDC hdc = GetWindowDC(GetForegroundWindow()); // ���� Ȱ��ȭ�� â�� HDC ���

    for (i = 0; i < 30; i++) {
        int x1 = randint(0, 300); // 0���� 300 ������ x1 ��ǥ
        int y1 = randint(0, 300); // 0���� 300 ������ y1 ��ǥ
        int x2 = randint(0, 300); // 0���� 300 ������ x2 ��ǥ
        int y2 = randint(0, 300); // 0���� 300 ������ y2 ��ǥ

        // �������� ���� �׸�
        line(hdc, x1, y1, x2, y2);

        Sleep(100); // 100 �и��� ���� ���
    }

    return 0;
}