#include <stdio.h>

#define maxN 10

void shell_sort(int *arr, int N) {
	int gap, tmp;
	for (gap = N/2; gap > 0; gap /= 2) {
		for (int i = gap; i < N; i += 1) {
			tmp = arr[i];
			int j;
			for (j = i; j >= gap && arr[j-gap] > tmp; j -= gap) {
				arr[j] = arr[j -gap];
			}
			arr[j] = tmp;
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
