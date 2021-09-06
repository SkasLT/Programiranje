#include <stdio.h>
#define MAX 100

void Ispis(float *px, int r, int s);
void Umanji(float *px, int r, int s);

int main(void)
{
    float x[MAX][MAX];
    float *px = &x[0][0];
    int r, s;

    printf("Unesi broj stupaca i redaka polja: ");
    scanf("%d %d", &r, &s);
    printf("Unesi elemente polja:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%f", px + s * i + j);
        }
    }

    printf("Prije:\n");
    Ispis(px, r, s);
    Umanji(px, r, s);
    printf("Poslje:\n");
    Ispis(px, r, s);
    return 0;
}

void Ispis(float *px, int r, int s)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
            printf("%.2f\t", *(px + s * i + j));
        printf("\n");
    }
}

void Umanji(float *px, int r, int s)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (i % 2 != 0)
                (*(px + s * i + j)) -= 1;
        }
    }
}