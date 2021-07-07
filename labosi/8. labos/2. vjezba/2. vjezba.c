#include <stdio.h>
#define MAX 7

int main()
{
    int n;
    float x[MAX][MAX], suma = 0;

    printf("Utipkaj broj redaka i broj stupaca: ");
    scanf(" %d", &n);
    if (n > MAX || n < 2)
    {
        printf("Pogresan unos.");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf(" %f", &x[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.2f ", x[i][j]);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) == (n - 1))
                suma += x[i][j];
        }
    }
    printf("Suma sporedne dijagonale je: %.2f", suma);
    return 0;
}