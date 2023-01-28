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
int partition(int *arr, int left, int right);
void swap(int *a, int *b);
void quicksort(int *arr, int left, int right);

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

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int *arr, int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j <= right; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[right]);
    return i+1;
}

void quicksort(int *arr, int left, int right) {
    if (right > left) {
        int i = partition(arr, left, right);
        quicksort(arr, left, i-1);
        quicksort(arr, i-1, right);
    }
}
