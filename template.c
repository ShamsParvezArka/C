#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int32_t vmax(int32_t vector2[], int32_t n) {
	int32_t vmax = INT_MIN;
	for (int32_t i = 0; i < n; i++) {
		if (vmax < vector2[i]) {
			vmax = vector2[i];
		}
	}
	return vmax;
}
int32_t vmin(int32_t vector2[], int32_t n) {
	int32_t vmin = INT_MAX;
	for (int32_t i = 0; i < n; i++) {
		if (vmin > vector2[i]) {
			vmin = vector2[i];
		}
	}
	return vmin;
}
int32_t vmin_non_zero(int32_t vector2[], int32_t n) {
	int32_t vmin_non_zero = INT_MAX;
	for (int32_t i = 0; i < n; i++) {
		if (vmin_non_zero > vector2[i] && vector2[i] > 0) {
			vmin_non_zero = vector2[i];
		}
	}
	return vmin_non_zero;
}

int8_t *parse_vector2(int32_t n) {
	int8_t *vector2 = malloc(sizeof(int8_t));
	int8_t length = (int8_t) floor(log10(n));
	for (int i = 0; i < length; i++) {
		vector2[length - i] = n % 2;
		n = n / 10;
	}
	return vector2;
}

