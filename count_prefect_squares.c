#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <math.h>

unsigned long count_perfect_squares(double lower_limit, double upper_limit);

int main()
{
	printf("%lu", count_perfect_squares(3, 9)); // count_perfect_square(3,9) -> 2
	return 0;
}

unsigned long count_perfect_squares(
		double lower_limit, 
		double upper_limit) {
	// sqrt(upperlimit) and round down to the previous integer
	// sqrt(lowerLimit) and round up to the previous integer
	// substract them and add 1
	return (unsigned long) (floor(sqrt(upper_limit)) - ceil(sqrt(lower_limit)) + 1);
}