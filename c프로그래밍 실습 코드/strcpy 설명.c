#include <stdio.h>
#include <string.h>

void strcpymy(char* t, char* s) {
	int i;
	i = 0;
	while (s[i] != '\0') {
		t[i] = s[i];
		i++;
	}
	t[i] = '\0';

}
int main(void) {
	int i;
	char str[100] = "1234567890";
	char tt[100];
	scanf("%s", str);
	strcpy(tt, str);
	printf("1: %s\n", tt);
	strcpymy(tt, str);
	printf("2: %s\n", tt);
	return 0;
}