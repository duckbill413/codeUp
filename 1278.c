#include <stdio.h>
//1278 : 자릿수 계산
int main()
{
    int cnt = 0;
    int num;
    scanf("%d", &num);

    while (num != 0)
    {
        num /= 10;
        cnt++;
    }

    printf("%d", cnt);
    return 0;
}