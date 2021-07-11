#include <stdio.h>
#include <stdlib.h>
//2631.c
/*보물 찾기
수열 속에 숨어 있는 보물들을 찾아보자. n개의 자연수로 이루어진 수열이 있다.

이 수열들 중 연속된 1개 이상의 원소들의 합이 정확히 k가 되면 이 구간은 보물구간이라고 한다.

주어진 n개의 자연수 중에서 보물 구간이 몇 개 있는지 구하는 프로그램을 작성하시오.
*/
//연속된 숫자의 합이 k와 같아질 때를 주목 해야 한다.
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int sum = 0;
    int *num = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", num + i);

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(num + i) > k)
            continue;

        sum = *(num + i);

        if (sum == k)
        {
            cnt++;
            continue;
        }
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                sum += *(num + j);
                if (sum > k)
                    break;
                else if (sum == k)
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    printf("%d", cnt);
    free(num);
    return 0;
}