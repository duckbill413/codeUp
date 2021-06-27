#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int a[19][19] = {0};
    for (int i = 0; i < num; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        a[x - 1][y - 1] = 1;
    }
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}