#include <stdio.h>

int main() {
	float x = 420.69;
	int y = *(int*) &x;

	printf("%d",  y); // x::float -> x::int
	printf("%.2f", *(float*) &y); //x::int -> x::float
	return 0;
}
