#include <stdio.h>
#define MAX 100

void Ucitaj(int *px, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", px + i);
    }
}

void Racunaj(int *pzbroj, float *pars, int m, int *px)
{
    *pzbroj = 0;
    for (int i = 0; i < m; i++)
        *pzbroj += *(px + i);
    *pars = *pzbroj / (float)m;
}

void Ispisi(int *px, int n)
{
    for (int i = 0; i < n; i++)
        printf("x[%d] = %d\n", i, *(px + i));
}

int main(void)
{
    int x[MAX];
    int n, zbroj;
    float ars;

    printf("Unesi broj elemenata polja: ");
    scanf("%d", &n);

    Ucitaj(&x[0], n);
    Ispisi(&x[0], n);
    Racunaj(&zbroj, &ars, n, &x[0]);

    printf("Zbroj: %d\n", zbroj);
    printf("Ars: %.2f\n", ars);
    return 0;
}