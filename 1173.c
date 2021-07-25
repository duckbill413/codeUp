#include <stdio.h>
/*
1173: 30분전
*/
int main()
{
    int hour, min;
    scanf("%d %d", &hour, &min);

    if (min >= 30)
        min -= 30;
    else if (min < 30)
    {
        if (hour > 0)
            hour -= 1;
        else
            hour = 23;
        min += 30;
    }

    printf("%d %d", hour, min);
    return 0;
}