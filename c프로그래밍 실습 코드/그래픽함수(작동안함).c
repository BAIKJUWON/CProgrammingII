#include <windows.h> // Windows 그래픽 라이브러리를 사용하기 위한 헤더 파일
#include <stdlib.h>  // 난수를 사용하기 위한 헤더 파일
#include <stdio.h>

// 선을 그리는 함수
void line(HDC hdc, int x1, int y1, int x2, int y2) {
    MoveToEx(hdc, x1, y1, NULL); // 시작점을 (x1, y1)로 이동
    LineTo(hdc, x2, y2);         // (x1, y1)에서 (x2, y2)까지 선 그리기
}

// 주어진 범위 내에서 난수를 생성하는 함수
int randint(int x1, int x2) {
    return x1 + rand() % (x2 - x1); // x1과 x2 사이의 무작위 정수 생성
}

int main(void) {
    int i;
    HDC hdc = GetWindowDC(GetForegroundWindow()); // 현재 활성화된 창의 HDC 얻기

    for (i = 0; i < 30; i++) {
        int x1 = randint(0, 300); // 0부터 300 사이의 x1 좌표
        int y1 = randint(0, 300); // 0부터 300 사이의 y1 좌표
        int x2 = randint(0, 300); // 0부터 300 사이의 x2 좌표
        int y2 = randint(0, 300); // 0부터 300 사이의 y2 좌표

        // 무작위로 선을 그림
        line(hdc, x1, y1, x2, y2);

        Sleep(100); // 100 밀리초 동안 대기
    }

    return 0;
}