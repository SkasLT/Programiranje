#include <stdio.h>

int main(void)
{
    int n;
    float suma = 0;

    printf("Unesi broj n: ");
    scanf("%d", &n);

    if ((n < 2) || (n > 7))
    {
        printf("Pogresan unos, kraj programa");
        return 1;
    }
    float x[n][n];

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
            printf("%.2f\t", x[i][j]);

            if ((i + j) == (n - 1))
                suma += x[i][j];
        }
        printf("\n");
    }
    printf("Suma: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) == (n - 1) && j == 0)
                printf("(%.2f)", x[i][j]);
            else if ((i + j) == (n - 1))
                printf("(%.2f) + ", x[i][j]);
        }
    }
    printf(" = %.2f", suma);
    return 0;
}