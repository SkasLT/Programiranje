#include <stdio.h>

int main(void)
{
    int n;
    float pom;

    printf("Unesi n: ");
    scanf("%d", &n);

    if (n < 2 || n > 7)
    {
        printf("Pogrešan unos. Kraj programa.");
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
            if (j == 0)
            {
                pom = x[i][j];
                x[i][j] = x[i][n - 1];
                x[i][n - 1] = pom;
            }
            printf("%.2f  ", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}