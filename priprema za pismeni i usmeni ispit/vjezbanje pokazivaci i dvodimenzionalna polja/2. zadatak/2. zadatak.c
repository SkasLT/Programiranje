#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void Umanji(float *, int, int);
void Ispis(float *, int, int);

int main(void)
{
    int r, s;
    float x[MAX][MAX];
    float *px = &x[0][0];

    printf("Unesi dimenzije polja:\n");
    do
    {
        printf("Broj redaka: ");
        scanf("%d", &r);
        printf("Broj stupaca: ");
        scanf("%d", &s);
        if (r > MAX || r < 1 || s > MAX || s < 1)
            printf("Pogresan unos. Ponovite unos.\n");
    } while (r > MAX || r < 1 || s > MAX || s < 1);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%f", px + r * i + j);
        }
    }

    printf("Prije poziva:\n");
    Ispis(&x[0][0], r, s);
    Umanji(&x[0][0], r, s);

    printf("Nakon poziva:\n");
    Ispis(&x[0][0], r, s);
    return 0;
}

void Ispis(float *px, int r1, int s1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < s1; j++)
            printf("%.3f\t", *(px + s1 * i + j));
        printf("\n");
    }
}

void Umanji(float *px, int r1, int s1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < s1; j++)
        {
            if (i % 2 != 0)
                *(px + s1 * i + j) -= 1;
        }
    }
}