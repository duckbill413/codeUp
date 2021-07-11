#include <stdio.h>
#define find 10

int main()
{
    int hobit[9] = {0};
    for (int i = 0; i < 9; i++)
        scanf("%d", &hobit[i]);

    int i = 0;
    int j = 1;
    int sum = 0;

    while (1)
    {
        sum = 0;

        for (int k = 0; k < 9; k++)
            if (k != i && k != j)
                sum += hobit[k];
        if (sum == 100)
            break;
        j++;

        if (j == 9)
        {
            i++;
            j = i + 1;
        }
        if (i == 9)
            break;

        //printf("%d %d %d\n", i, j, sum);
    }
    int result[7] = {0};
    int p = 0;

    for (int k = 0; k < 9; k++)
    {
        if (k != i && k != j)
        {
            result[p] = hobit[k];
            p++;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            if (result[j] > result[j + 1])
            {
                int tmp = result[j + 1];
                result[j + 1] = result[j];
                result[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}