#include <stdio.h>
//2625.c
//삼각화단 만들기
int main()
{
    int len;
    scanf("%d", &len);

    int a = 1, b = 1, c = 1;
    int cnt = 0;

    for (; a < len; a++)
    {
        for (b = a; b < len; b++)
        {
            for (c = b; c < len; c++)
            {
                if ((a + b + c) == len)
                    if (a + b > c)
                        cnt++;
            }
        }
    }

    printf("%d", cnt);
    return 0;
}