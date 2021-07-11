#include <stdio.h>
/*2651 : 극장 좌석 배치 1
극장에 n개의 빈 좌석이 있다. 
k명의 관객들이 영화를 보기 위해서 왔다. 
이 관객들이 n개의 좌석에 앉을 수 있는 서로 다른 방법의 수를 구하는 프로그램을 작성하시오. 
(단, k명의 사람을 서로 구분되지 않는다.)
*/
long long nCr(int, int);
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    //printf("%d %d\n", n1, n2);
    int result = nCr(n - 2, k - 2) + 2 * nCr(n - 2, k - 1) + nCr(n - 2, k);
    printf("%d", result);

    return 0;
}

long long nCr(int n, int r)
{
    long long sum = 1;
    long long div = 1;
    for (int i = r + 1; i <= n; i++)
        sum *= i;

    for (int i = 1; i <= n - r; i++)
        div *= i;
    if (n < r)
        sum = 0;
    //printf("%d\n", sum / div);
    return sum / div;
}