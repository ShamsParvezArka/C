#include <stdio.h>

#define maxN 10


void selection(int arr[], int N) {
	int min, tmp;
	for (int i = 0; i < N; i++) {
		min = i;
		for (int j = i+1; j < N; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		tmp = arr[min];
		arr[min] = arr[i];
		arr[i] = tmp;
	}
}

int main() {
	int arr[maxN] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
	selection(arr, maxN);
	for (int i = 0; i < maxN; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
