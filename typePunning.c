#include <stdio.h>

int main() {
	float x = 420.69;
	int y = *(int*) &x; // x::float -> x::int

	printf("%d",  y); 
	printf("%.2f", *(float*) &y); //x::int -> x::float
	return 0;
}
