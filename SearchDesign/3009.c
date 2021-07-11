#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, s;
    scanf("%d %d", &n, &s);
    int *num = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", num + i);

    int cnt = 1;
    
}