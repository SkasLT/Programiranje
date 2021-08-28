#include <stdio.h>

int main(void)
{
    int n, counter = 0;
    float sum = 0;
    printf("Unesi n: ");
    scanf("%d", &n);

    if (n < 2 || n > 7)
    {
        printf("Pogrešan unos. Kraj programa.");
        return 1;
    }

    float x[n][n];
    float y[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%f", &x[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f  ", x[i][j]);
            if (i + j == n - 1)
            {
                sum += x[i][j];
                y[counter] = x[i][j];
                counter++;
            }
        }
        printf("\n");
    }

    printf("Suma: ");

    for (int i = 0; i < counter; i++)
    {
        if (i != counter - 1)
            printf("(%.2f) + ", y[i]);
        else
            printf("(%.2f) = % .2f", y[i], sum);
    }
    return 0;
}