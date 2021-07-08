#include <stdio.h>
//2628.c
//케익자르기
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    if (a > b)
        swap(&a, &b);
    if (c > d)
        swap(&c, &d);
    if (a < c && c < b && b < d)
    {
        printf("cross");
        return 0;
    }
    if (a > c && a < d && b > d)
    {
        printf("cross");
        return 0;
    }
    printf("not cross");
    return 0;
}