#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);

    char name[50][30];
    int rank[50];
    int score[50];

    for (int i = 0; i < num; i++)
    {
        scanf("%s %d", name[i], &score[i]);
        rank[i] = 1;
    }
    for (int i = 0; i < num; i++)
        for (int j = 0; j < num; j++)
            if (score[i] < score[j])
                rank[i]++;

    for (int i = 0; i < num; i++)
        if (rank[i] == 3)
        {
            printf("%s", name[i]);
            break;
        }

    return 0;
}