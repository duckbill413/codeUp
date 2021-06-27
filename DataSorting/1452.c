#include <stdio.h>
//Quick sort

void QuickSort(int arr[], int left, int right);

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100000] = {0};
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void QuickSort(int arr[], int left, int right)
{
    int L = left, R = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    while (L <= R)
    {
        while (arr[L] < pivot)
            L++;
        while (arr[R] > pivot)
            R--;
        if (L <= R)
        {
            if (L != R)
            {
                tmp = arr[L];
                arr[L] = arr[R];
                arr[R] = tmp;
            }
            L++;
            R--;
        }
    }
    if (left < R)
        QuickSort(arr, left, R);
    if (right > L)
        QuickSort(arr, L, right);
}