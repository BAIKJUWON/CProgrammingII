#include <stdio.h>

int main(void) {
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	printf("������ = %d %d %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;

	printf("������ = %d %d %d\n", pc, pi, pd);
	printf("������+2 = %d %d %d\n", pc + 2, pi + 2, pd + 2);
	return 0;
}