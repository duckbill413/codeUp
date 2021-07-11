#include <stdio.h>
#include <stdlib.h>
//2633.c
/*Lower Bound
n 개로 이루어진 정수 집합에서 원하는 수 k이상인 수가 처음으로 등장하는 위치를 찾으시오.

단, 입력되는 집합은 오름차순으로 정렬되어 있으며, 같은 수가 여러 개 존재할 수 있다.
*/

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int *num = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", num + i);

    for (int i = 0; i < n; i++)
        if (*(num + i) >= k)
        {
            printf("%d", i + 1);
            return 0;
        }

    printf("%d", n + 1);
    free(num);
    return 0;
}