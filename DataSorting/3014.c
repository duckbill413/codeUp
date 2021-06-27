#include <stdio.h>
//3014: 정렬을 빠르게
//비둘기 집 정렬
int main()
{
    int n;
    scanf("%d", &n);
    int input, pinput = 0;
    int arr[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        arr[input]++;
        if (input > pinput)
            pinput = input;
    }
    for (int i = 0; i <= pinput; i++)
    {
        for (int j = 0; j < arr[i]; j++)
            printf("%d ", i);
    }
    return 0;
}