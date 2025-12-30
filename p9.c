#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num_add;
    scanf("%d", &num_add);
    int pos = n;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > num_add)
        {
            pos = i;
            break;
        }      
    }
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num_add;
    for (int i = 0; i < n + 1; i++)
    {
        if (i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}