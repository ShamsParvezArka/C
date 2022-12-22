#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <math.h>

unsigned long int countPerfectSquare(
		double lowerLimit, 
		double upperLimit) {
	// sqrt(upperlimit) and round down to the previous integer
	// sqrt(lowerLimit) and round up to the previous integer
	// substract them and add 1
	return (unsigned long int) (floor(sqrt(upperLimit)) - ceil(sqrt(lowerLimit)) + 1);
}

int main()
{
	printf("%lu", countPerfectSquare(3, 9)); // countPerfectSquare(3,9) -> 2
	return 0;
}
