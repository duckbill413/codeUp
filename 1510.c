#include <stdio.h>
#include <stdlib.h>
//1510 : 홀수 마방진
int main()
{
    int size;
    scanf("%d", &size);
    int *array = (int *)malloc(sizeof(int) * (size * size));

    int n = 1;
    int row = 0, col = 1;
    while (n != size * size)
    {
        *(array + (size * row) + col) = n;
        n++;
        row--;
        col++;
        if (row < 0)
            row = size - 1;
        if (col == size)
            col = 0;
    }

    for (int i = 0; i < size * size; i++)
    {
        printf("%d ", *(array + i));
        if (i % size == 0)
            printf("\n");
    }
    return 0;
}

//수정 필요 0724