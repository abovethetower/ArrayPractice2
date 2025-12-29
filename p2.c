#include <stdio.h>
#define MAX_EXPONENT 1000

int main(void)
{
    int coefficients[MAX_EXPONENT + 1] = {0};
    int n, m, exp, coef;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &exp, &coef);
        coefficients[exp] += coef;
    }
    scanf("%d", &m);
    for (int j = 0; j < m; j++)
    {
        scanf("%d%d", &exp, &coef);
        coefficients[exp] += coef; 
    }

    int first_item = 1;
    int all_zero = 1;
    for (int k = MAX_EXPONENT; k >= 0; k--)
    {
        if (coefficients[k] != 0)
        {
            all_zero = 0;
            if (first_item)
            {
                printf("%d %d", k, coefficients[k]);
                first_item = 0;
            }
            else
            {
                printf(" %d %d", k, coefficients[k]);
            }
        }
    }
    if (all_zero)
        {
            printf("0 0\n");
        }
    else
        {
            printf("\n");
        }
    return 0;
}