#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>

#define maxN 10

int max_element(int *arr, int N);
int min_element(int *arr, int N);
int arr_to_num(int *arr, int N);
int *remove_duplicates(int *arr, int N, int *new_length);
void num_to_arr(int n, int *arr, int N);

int partition(int *arr, int left, int right);
void swap(int *a, int *b);
void quicksort(int *arr, int left, int right);

int main(void)
{
  return 0;
}

int max_element(int *arr, int N)
{
  int max = INT_MIN;
  for (int i = 0; i < N; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int min_element(int *arr, int N)
{
  int min = INT_MAX;
  for (int i = 0; i < N; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

void num_to_arr(int n, int *arr, int N)
{
  for (int i = N - 1; i >= 0; i--) {
    arr[i] = n % 10;
    n = n / 10;
  }
}

int arr_to_num(int *arr, int N)
{
  int number = 0;
  for (int i = 0; i < N; i++) {
    number = number * 10 + arr[i];
  }
  return number;
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int partition(int *arr, int left, int right)
{
  int pivot = arr[right];
  int i = left - 1;
  for (int j = left; j <= right; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[right]);
  return i + 1;
}

void quicksort(int *arr, int left, int right)
{
  if (right > left) {
    int i = partition(arr, left, right);
    quicksort(arr, left, i - 1);
    quicksort(arr, i - 1, right);
  }
}

int *remove_duplicates(int *arr, int N, int *new_length)
{
  int *new_arr = (int *)malloc(N * sizeof(int));

  int unique_count = 0;
  for (int i = 0; i < N; i++) {
    bool is_unique = true;
    for (int j = 0; j < unique_count; j++) {
      if (new_arr[i] == arr[j]) {
        is_unique = false;
        break;
      }
    }
    if (is_unique) {
      new_arr[unique_count] = arr[i];
      unique_count++;
    }
  }
  if (unique_count != N) new_arr = realloc(new_arr, unique_count * sizeof(int));
  *new_length = unique_count;
  return new_arr;
}