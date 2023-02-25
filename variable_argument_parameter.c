#include <stdio.h>
#include <stdarg.h>

double sum(int N, ...) {
	va_list args;
	va_start(args, N);

	double x = 0;
	for (int i = 0; i < N; i++) {
		double tmp = va_arg(args, double);
		x += tmp;
	}
	va_end(args);

	return x;
}

int main()
{
	printf("%.2lf\n", sum(3, 10.2, 20.2, 30.2));
	return 0;
}
