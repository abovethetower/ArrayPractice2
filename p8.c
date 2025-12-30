#include <stdio.h>
int FindCenterIndex(int *arr, int size)
{

    int index;
    int found = 0;
    int sum = 0;
    int LeftOfSum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    for (int i = 0 ; i < size; i++)
    {
       if (LeftOfSum == sum - LeftOfSum - arr[i])
       {
            index = i;
            found = 1;
            break;
       }
       LeftOfSum += arr[i];
    }
    if (found) return index;
    else return -1;
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

    int index = FindCenterIndex(arr, n);
    printf("%d\n", index);

    return 0;
}