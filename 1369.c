#include <stdio.h>
#include <stdlib.h>
//1411 : 빠진 카드
int main()
{
    int size;
    scanf("%d", &size);
    int *card = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size - 1; i++)
    {
        int n;
        scanf("%d", &n);
        *(card + n - 1) = 1;
    }
    for (int i = 0; i < size; i++)
    {
        if (*(card + i) != 1)
        {
            printf("%d", i + 1);
            return 0;
        }
    }

    return 0;
}