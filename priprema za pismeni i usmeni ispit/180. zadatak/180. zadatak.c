#include <stdio.h>
#define MAX 100

void Upisi(float *px, int r, int s);
void Ispisi(float *px, int r, int s);
int Prebroji(float *px, int r, int s);

int main(void)
{
    float x[MAX][MAX];
    int r, s;

    printf("Unesi broj stupaca i redaka polja: ");
    scanf("%d %d", &r, &s);
    printf("Unesi elemente polja:\n");
    Upisi(&x[0][0], r, s);
    Ispisi(&x[0][0], r, s);
    printf("%d", Prebroji(&x[0][0], r, s));
}

void Upisi(float *px, int r, int s)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%f", px + s * i + j);
        }
    }
}

void Ispisi(float *px, int r, int s)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
            printf("%.2f\t", *(px + s * i + j));
        printf("\n");
    }
}

int Prebroji(float *px, int r, int s)
{
    int brojac = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if ((*(px + s * i + j) >= 4 && *(px + s * i + j) <= 6) || (*(px + s * i + j) >= 10 && *(px + s * i + j) <= 17))
                brojac++;
        }
    }
    return brojac;
}