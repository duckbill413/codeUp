#include <stdio.h>
//1286 : 최댓값, 최솟값
int main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &num[i]);
    int min = num[0];
    int max = num[0];

    for (int i = 1; i < 5; i++)
    {
        if (min > num[i])
            min = num[i];
        if (max < num[i])
            max = num[i];
    }

    printf("%d %d", max, min);
    return 0;
}