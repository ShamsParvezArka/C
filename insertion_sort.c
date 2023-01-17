#include <stdio.h>

#define maxN 10

void insertion_sort(int arr[], int N) {
	int key, j;
	for (int i = 0; i < N; i++) {
		key = arr[i];
		j = i - 1;
		while (j>=0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

int main() {
	int arr[maxN] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
	insertion_sort(arr, maxN);
	for (int i = 0; i < maxN; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
