#include <stdio.h>

int fac(int n) {
	int x;
	if (n <= 1) x = 1;
	else x = n * fac(n - 1);
	printf("fac(%d)\n", n);
	return x;
}

int main(void) {
	fac(5);
}