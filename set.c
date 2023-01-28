#include <stdio.h>

void set(int *arr, int N) {
	int key;
	for (int i = 0; i < N; i++) {
		key = arr[i];
		for (int j = i+1; j < N; j++) {
			if (key == arr[j]) {
				for (int k = j; k < N; k++) {
					arr[k] = arr[k+1];
				}
				j--;
				N--;
			}
		}
	}
}
	

int main() {
	int maxN = 10;
	int arr[maxN];
	for (int i = 0; i < maxN; i++) {
		scanf("%d", &arr[i]);
	}
	set(arr, maxN);
	int index = 0;
	while (arr[index] != '0') {
		printf("%d ", arr[index]);
		index++;
	}
	return 0;
}
