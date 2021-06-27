#include <stdio.h>
//버블정렬의 문제 단계 확인
int a[1001];
int n, i, j, temp;
int main()
{
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int found = 0;
    for (i = 1; i < n; i++)
    {
        found = 0;
        for (int j = 1; j <= n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                found++;//정렬 발생
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        if (found == 0)//정렬 발생X
        {
            printf("%d", i - 1);
            //이 행에서 정렬이 발생하지 않았으므로 이전 항에서 정렬이 완료됨
            return 0;
        }
    }

    printf("%d", i - 1);
    //마지막 행에서 정렬이 발생한 경우
    return 0;
}