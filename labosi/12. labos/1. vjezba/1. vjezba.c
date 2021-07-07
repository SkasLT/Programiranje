#include <stdio.h>
int main(void)
{
    int i, j;
    int m, n, umnozak = 1;
    do
    {
        printf("Unesi broj m: ");
        scanf(" %d", &m);
        printf("Unesi broj n: ");
        scanf(" %d", &n);
        if (n > 10 || n < 1 || m > 10 || m < 1)
            printf("\npogresan unos");

    } while (n > 10 || n < 1 || m > 10 || m < 1);

    int x[m][n];
    int *px = &x[0][0];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("x[%d][%d] =  ", i, j);
            scanf("%d", px + n * i + j);
        }
    }
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            umnozak = umnozak * *(px + n * i + j);
    printf("Umnozak je %d", umnozak);
    return 0;
}