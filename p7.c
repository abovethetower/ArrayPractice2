#include <stdio.h>
void MoveNoneZero(int * arr, int size)
{
    int NoneZeroIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[NoneZeroIndex] = arr[i];
            NoneZeroIndex++;
        }
    }

    for (int i = NoneZeroIndex ; i < size; i++)
    {
        arr[i] = 0;
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    MoveNoneZero(arr, n);

    for (int i = 0; i < n; i++)
    {
        if (i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}