#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define maxN 10000

int partition(int *arr, int left, int right);
void swap(int *x, int *y);
void quick_sort(int *arr, int left, int right);

int main()
{
    int arr[maxN];

    srand(time(NULL));
    for (int i = 0; i < maxN; i++)
    {
        arr[i] = rand() % maxN;
    }

    quick_sort(arr, 0, maxN - 1);
    for (int i = 0; i < maxN; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int partition(int *arr, int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j <= right - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[right]);
    return i + 1;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quick_sort(int *arr, int left, int right)
{
    if (right > left)
    {
        int i = partition(arr, left, right);
        quick_sort(arr, left, i - 1);
        quick_sort(arr, i + 1, right);
    }
}