#include <stdio.h>
#define MAXRED 10
#define MAXSTUP 10

void Ucitaj(int *px, int r, int s)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%d", px + s * i + j);
        }
    }
}

void Ispisi(int *px, int r, int s)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
            printf("%d\t", *(px + s * i + j));
        printf("\n");
    }
}

void Racunaj(int *px, int *pzbroj, float *pars, int r, int s)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
            *pzbroj += *(px + s * i + j);
    }
    *pars = *pzbroj / ((float)r * s);
}

int main(void)
{
    int x[MAXRED][MAXSTUP];
    int r, s, zbroj = 0;
    float ars;

    printf("Unesi broj redaka i stupaca polja: ");
    scanf("%d %d", &r, &s);
    Ucitaj(&x[0][0], r, s);
    Ispisi(&x[0][0], r, s);
    Racunaj(&x[0][0], &zbroj, &ars, r, s);
    printf("Zbroj: %d\n", zbroj);
    printf("Aritmeticka sredina: %.2f\n", ars);

    return 0;
}