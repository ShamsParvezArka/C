#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *parseVector(unsigned int n) {
	int *vector = malloc(sizeof(int));
	int length = (int) floor(log10(n)); // log_base10(integer) -> integer lenght
	for (int i = 0; i <= length; i++) {
		vector[length-i] = n % 10; //inserting elements from backward
		n = n / 10;
	}
	return vector;
}

int main() 
{
	int *vector = parseVector(69420); // 69420 -> {6, 9, 4, 2, 0}
	free(vector);
	return 0;
}

