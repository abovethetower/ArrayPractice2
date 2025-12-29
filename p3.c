#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int data[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }
    int count = 1;
    int first_item = 1;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && data[i] == data[i + 1])
        {
            count++;
        }
        else
        {
            if (first_item)
            {
                printf("%d %d", data[i], count);
                first_item = 0;
            }
            else
            {
                printf(" %d %d", data[i], count);
            }
            count = 1;
        }
    }
    
    printf("\n");
    return 0;
}