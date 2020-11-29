#include <stdio.h>

int main(void)
{
	double x, y;
	double* px = &x;
	double* py = &y;

	printf("두 실수 입력: ");
	scanf_s("%lf %lf", px, py);
	printf("%.2f + %.2f = %.2f\n", *px, *py, *px + *py);

	return 0;
}