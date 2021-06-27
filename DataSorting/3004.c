#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
//3004: 데이터 재정렬
int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    int *rank = (int *)malloc(500000 * sizeof(int));

    int ranking = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        rank[arr[i]]++;
    }
    for (int i = 0; i < 500000; i++)
        if (rank[i] > 0)
            rank[i] = ranking++;

    for (int i = 0; i < n; i++)
        printf("%d ", rank[arr[i]]);

    free(arr);
    free(rank);
    return 0;
}