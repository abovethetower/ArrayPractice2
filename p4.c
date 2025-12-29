#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);

    int arrA[n];
    int arrB[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrA[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arrB[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arrA[i] == arrB[j])
            {
                arrA[i] = 0;
            }
        }
    }
    int first_item = 1;
    for (int i = 0; i < n; i++)
    {
        if (arrA[i] != 0)
        {
            if (first_item)
            {
                printf("%d", arrA[i]);
                first_item = 0;
            }
            else
            {
                printf(" %d", arrA[i]);
            }
        }
    }
    printf("\n");
    return 0;
}