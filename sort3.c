#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>

#define maxN 3

void sort3(int arr[]) {
	int tmp;
	if (arr[0] > arr[1]) {
		tmp = arr[0];
		arr[0] = arr[1];
		arr[1] = tmp;
	}
	if (arr[0] > arr[2]) {
		tmp = arr[0];
		arr[0] = arr[2];
		arr[2] = tmp;
	}
	if (arr[1] > arr[2]) {
		tmp = arr[1];
		arr[1] = arr[2];
		arr[2] = tmp;
	}
}

int main() {
	int arr[maxN] = {3, 10, 2};
	sort3(arr);
	for (int i = 0; i < 3; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
