#include <stdio.h>

#define maxN 10

void shell_sort(int *arr, int N) {
	int key;
	for (int gap = N/2; gap > 0; gap /= 2) {
		for (int i = gap; i < N; i++) {
			key = arr[i];
			int j; 
			for (j = i; i >= gap && arr[j-gap] > key; j -= gap) {
				arr[j] = arr[j-gap];
			}
			arr[j] = key;
		}
	}
}

int main() {
	int arr[maxN] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
	shell_sort(arr, maxN);
	for (int i = 0; i < maxN; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
