#include <stdio.h>

#define maxN 5

int most_repeated_element(int *arr, int N) {
	int count, key, tmp;
	for (int i = 0; i < N; i++) {
		key = arr[i];
		for (int j = 0; j < N; j++) {
			if (arr[j] == key) {
				count++;
			}
		}
		if (count > tmp) {
			tmp = count;
			key = arr[i];
			count = 0;
		} else {
			count = 0;
		}
	}
	return key;
}

int main() {
	int arr[maxN] = {3, 1, 3, 2, 3};
	printf("%d\n", most_repeated_element(arr, maxN));
	return 0;
}
