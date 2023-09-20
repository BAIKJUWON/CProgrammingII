#include <stdlib.h>  // 난수 생성 함수를 사용하기 위한 헤더 파일
#include <stdio.h>   // 표준 입출력 함수를 사용하기 위한 헤더 파일
#include <time.h>    // 시간을 기반으로 한 시드(seed) 설정을 위한 헤더 파일

#define MAX 45       // 난수의 최대 범위를 정의

int main(void)
{
    int i;

    // 난수 생성기를 현재 시간을 기반으로 초기화
    srand(time(NULL));

    // 6번 반복하여 난수를 생성하고 출력
    for (i = 0; i < 6; i++)
    {
        // 1부터 MAX까지의 난수를 생성하고 출력
        printf("%d ", 1 + rand() % MAX);
    }

    return 0;
}