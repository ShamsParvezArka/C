#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int min(int n, int array[]) {
	int minimum = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (minimum > array[i]) {
			minimum = array[i];
		}
	}
	return minimum;
}
int min_non_zero(int n, int array[]) {
	int minimum_non_zero = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (minimum_non_zero > array[i] && array[i] > 0) {
			minimum_non_zero = array[i];
		}
	}
	return minimum_non_zero;
}
