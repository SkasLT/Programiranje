#include <stdio.h>
void Ucitaj(int *px, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%d", px + n * i + j);
        }
    }
}
void Umnozak(int *px, int m, int n, int *pumnozak)
{

    int i, j;
    *pumnozak = 1;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            *pumnozak = *pumnozak * *(px + n * i + j);
}
int main(void)
{
    int n, m;
    int m1, n1, umnozak;
    do
    {
        printf("Unesi broj m: ");
        scanf("%d", &m1);
        printf("Unesi broj n: ");
        scanf("%d", &n1);
        if (n1 > 10 || n1 < 1 || m1 > 10 || m1 < 1)
            printf("\npogresan unos");

    } while (n1 > 10 || n1 < 1 || m1 > 10 || m1 < 1);

    int x[m1][n1];
    Ucitaj(&x[0][0], m1, n1);
    Umnozak(&x[0][0], m1, n1, &umnozak);
    printf("Umnozak je %d", umnozak);
    return 0;
}