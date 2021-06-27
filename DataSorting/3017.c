#include <stdio.h>

struct score
{
    int math[1000];
    int infor[1000];
    int rank[1000];
};

int main()
{
    struct score sc;
    int tmp;
    int n;
    scanf("%d", &n);
    int ranking = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &sc.math[i], &sc.infor[i]);
        sc.rank[i] = ranking++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (sc.math[j] < sc.math[j + 1])
            {
                tmp = sc.math[j];
                sc.math[j] = sc.math[j + 1];
                sc.math[j + 1] = tmp;
                tmp = sc.infor[j];
                sc.infor[j] = sc.infor[j + 1];
                sc.infor[j + 1] = tmp;
                tmp = sc.rank[j];
                sc.rank[j] = sc.rank[j + 1];
                sc.rank[j + 1] = tmp;
            }
            else if (sc.math[j] == sc.math[j + 1])
            {
                if (sc.infor[j] < sc.infor[j + 1])
                {
                    tmp = sc.math[j];
                    sc.math[j] = sc.math[j + 1];
                    sc.math[j + 1] = tmp;
                    tmp = sc.infor[j];
                    sc.infor[j] = sc.infor[j + 1];
                    sc.infor[j + 1] = tmp;
                    tmp = sc.rank[j];
                    sc.rank[j] = sc.rank[j + 1];
                    sc.rank[j + 1] = tmp;
                }
                else if (sc.infor[j] == sc.infor[j + 1])
                {
                    if (sc.rank[j] < sc.rank[j])
                    {
                        tmp = sc.math[j];
                        sc.math[j] = sc.math[j + 1];
                        sc.math[j + 1] = tmp;
                        tmp = sc.infor[j];
                        sc.infor[j] = sc.infor[j + 1];
                        sc.infor[j + 1] = tmp;
                        tmp = sc.rank[j];
                        sc.rank[j] = sc.rank[j + 1];
                        sc.rank[j + 1] = tmp;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", sc.rank[i], sc.math[i], sc.infor[i]);
    }
    return 0;
}
