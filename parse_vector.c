#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int16_t *parse_vector(int64_t n) {
	int16_t *vector = (int16_t*) malloc(SHRT_MAX * sizeof(int16_t));
	int16_t length = (int) floor(log10(n)) + 1; // log_base10(integer) -> integer lenght
	for (int i = 0; i <= length; i++) {
		vector[length-i] = n % 10; // inserting elements from backward
		n = n / 10;
	}
	return vector;
}

int main() 
{
	int16_t *vector = parse_vector(69420); // 69420 -> {6, 9, 4, 2, 0}
	free(vector);
	return 0;
}

