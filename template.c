#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>

#define maxN 10

int  max_element(int *arr, int N);
int  min_element(int *arr, int N);
int  arr_to_num(int *arr, int N);
void num_to_arr(int n, int *arr, int N);
void shell_sort(int *arr, int N);

int main(void) {
  return 0;
}

int max_element(int *arr, int N) {
  int max = INT_MIN;
  for (int i = 0; i < N; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int min_element(int *arr, int N) {
  int min = INT_MAX;
  for (int i = 0; i < N; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

void num_to_arr(int n, int *arr, int N) {
  for (int i = N-1; i >= 0; i--) {
    arr[i] = n % 10;
    n = n / 10;
  }
}

int arr_to_num(int *arr, int N) {
  int number = 0;
  for (int i = 0; i < N; i++) {
    number = number*10 + arr[i];
  }
  return number;
}

void shell_sort(int *arr, int N) {
	int key;
	for (int gap = N/2; gap > 0; gap /= 2) {
		for (int i = gap; i < N; i++) {
			key = arr[i];
			int j;
			for (j = i; j >= gap && arr[j-gap] > key; j -= gap) {
				arr[j] = arr[j-gap];
			}
			arr[j] = key;
		}
	}
}
