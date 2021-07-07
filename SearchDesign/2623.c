#include <stdio.h>
//2623.c
//최대공약수 구하기

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int grand;
    int i = 1;

    while (1)
    {
        if (a % i == 0 && b % i == 0)
            grand = i;
        if (a < i || b < i)
            break;
        i++;
    }

    printf("%d", grand);
    return 0;
}
