#include <stdio.h>
#include <string.h>

int main(void) {
	char s[11] = "Hello";
	strcat(s, "world");
	printf("%s\n", s);

	return 0;
}

/* 
#include <stdio.h>와 #include <stdlib.h>:
이 두 줄은 표준 라이브러리 헤더 파일을 포함하고 있습니다. <stdio.h>는 표준 입출력 함수를 사용하기 위해 필요하며, <stdlib.h>는 표준 라이브러리 함수를 사용하기 위해 필요합니다.

int main(void):
C 프로그램의 진입점인 main 함수를 정의하고 있습니다. 이 함수는 정수형 값을 반환하며, 인자를 받지 않는 것으로 정의되어 있습니다.

char s[] = "HelloWorld";:
문자열을 저장하기 위한 문자 배열인 s를 선언하고 "HelloWorld" 문자열로 초기화합니다. 이 배열은 수정 가능하며, 문자열을 변경할 수 있습니다.

char *p = "HelloWorld";:
문자열을 가리키는 포인터 p를 선언하고 "HelloWorld" 문자열의 첫 번째 문자를 가리키도록 초기화합니다. 이 포인터는 가리키는 문자열을 변경할 수 없습니다.

s[0] = 'h';:
문자 배열 s의 첫 번째 문자를 'H'에서 'h'로 변경하려고 시도합니다. 이 작업은 허용됩니다.

p[0] = 'h'; (주석 처리된 부분):
주석 처리되어 있지만, 주석을 해제하면 컴파일 오류가 발생합니다. 이 부분은 포인터 p가 가리키는 문자열을 수정하려는 시도입니다. 그러나 포인터 p가 문자열 리터럴을 가리키고 있으므로 이를 수정할 수 없습니다.

printf 함수를 사용하여 결과를 출력합니다.

printf("포인터가 가리키는 문자열 = %s \n", p);은 포인터 p가 가리키는 문자열을 출력합니다. 처음에는 "HelloWorld"를 출력하고, 그 후에는 p가 "Goodbye" 문자열을 가리키도록 변경한 후 "Goodbye"를 출력합니다.
p = "Goodbye";:
포인터 p를 "Goodbye" 문자열을 가리키도록 변경합니다. 이로 인해 p는 더 이상 "HelloWorld"를 가리키지 않고 "Goodbye"를 가리키게 됩니다.
*/