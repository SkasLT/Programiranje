#include <stdio.h>

int main(void)
{

    int i, j, m, n, umnozak;

    do
    {

        printf("Utipkaj m: ");
        scanf("%d", &m);
        printf("Utipkaj n: ");
        scanf("%d", &n);
        if ((n < 1 || n > 10) && (m < 1 || m > 10))
            printf("Pogresan unos. Ponovite unos.\n");

    } while ((n < 1 || n > 10) && (m < 1 || m > 10));

    int x[m][n];
    int *px = &x[0][0];
    printf("Unesite polje:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%d", px + n * i + j);
        }
    }

    printf("Ispis ucitanog polja:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("x[%d][%d] = %d\n", i, j, *(px + n * i + j));
            umnozak *= *(px + i * n + j);
        }
    }

    printf("Umnožak: %d", umnozak);
    return 0;
}