#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void pr(int n) {
	int i;
	for (i = 0; i < n; i++) printf("*");
	printf("\n");
}
int main(void) {
	int deg, y;
	double rad;
	int base, expand;
	base = 30;
	expand = 30;
	for (deg = 0; deg <= 360; deg += 10) {
		rad = deg * 3.141592 / 180;
		y = expand * sin(rad) + base;
		pr(y);
	}

	return 0;
}