#include <stdio.h>
#include <math.h>

void poruka(int a, int b)
{
    if (a > 0 && b > 0 || a < 0 && b < 0)
        printf("Odbojna sila.\n");
    else
        printf("Privlacna sila.\n");
}

float konstanta(void)
{
    return 9 * pow(10, 9);
}

void sila(float *pSila, float a, float b, float razmak)
{
    *pSila = fabs(konstanta() * a * b * pow(10, -18) / (pow(razmak, 2) * pow(10, -4)));
}

int main()
{
    float q1, q2, d, Sila;
    printf("Unesi iznos 1. tockastog naboja [nC]: ");
    scanf("%f", &q1);
    printf("Unesi iznos 2. tockastog naboja [nC]: ");
    scanf("%f", &q2);
    printf("Unesi razmak izmedzu dva tockasta naboja [cm]: ");
    scanf("%f", &d);
    sila(&Sila, q1, q2, d);
    printf("F = %.3e\n", Sila);
    poruka(q1, q2);
    return 0;
}