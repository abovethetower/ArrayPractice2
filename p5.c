#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int arrA[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrA[i]);
    }

    int arrB[n];
    arrB[0] = (arrA[0] + arrA[1]) / 2;
    arrB[n - 1] = (arrA[n - 2] + arrA[n - 1]) / 2;
    for (int i = 1; i < n - 1; i++)
    {
        arrB[i] = (arrA[i - 1] + arrA[i] + arrA[i + 1]) / 3;
    }

    for (int i = 0; i < n; i++)
    {
        if (i != 0) printf(" ");
        printf("%d", arrB[i]);
    }
    printf("\n");
    return 0;
}