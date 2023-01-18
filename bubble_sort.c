#include <stdio.h>

#define maxN 7 

void bubble(int arr[], int N) {
	int key;
	for (int i = N-1; i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			if (arr[j-1] > arr[j]) {
				key = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = key;
			}
		}
	}
}

int main() {
	int arr[maxN] = {3, 1, 4, 1, 5, 9, 2};
	bubble(arr, maxN);
	for (int i = 0; i < maxN; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
