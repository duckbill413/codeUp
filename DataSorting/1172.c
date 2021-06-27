#include <stdio.h>
//1172: 세 수 정렬하기
void sort(int *);

int main()
{
    int num[3] = {0};
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    sort(num);

    printf("%d %d %d", num[0], num[1], num[2]);
    return 0;
}

void sort(int *pn)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (*(pn + j) > *(pn + j + 1))
            {
                int tmp = *(pn + j);
                *(pn + j) = *(pn + j + 1);
                *(pn + j + 1) = tmp;
            }
        }
    }
}