#include <stdio.h>
#include <stdlib.h>

#define SOL "apple"
int main(void) {
	char s[100] = SOL;
	char ans[100];
	int i, len;
	int pos1, pos2;
	char tmp;
	len = strlen(s);
	for (i = 0; i < len; i++) {
		pos1 = rand() % len;
		pos2 = rand() % len;
		tmp = s[pos1]; c
			s[pos1] = s[pos2];
		s[pos2] = tmp;
	}

	do {
		printf("%s의 원래단어를 맞춰보세요: ", s);
		scanf("%s", ans);
	} while (strcmp(ans, SOL) != 0);

	printf("축하합니다. \n");
	return 0;
}