#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = (arr[i] + 1) % 10;
        if (arr[i] != 0)
        {
            break;
        }
    }
    
    if (arr[0] == 0)
    {
        printf("1");
        for (int i = 0; i < n; i++)
        {
            printf(" %d", arr[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i != 0) printf(" ");
            printf("%d", arr[i]);
        }
    }
    printf("\n");
    return 0;
}