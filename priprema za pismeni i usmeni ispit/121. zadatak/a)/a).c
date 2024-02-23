#include <stdio.h>
#include <math.h>
#define PI 3.14159

void izracunajParametre(float opseg, float *pRadius, float *pPovrsina);

int main(void)
{
    float opsegO, Radius, Povrsina;
    /*
    Pointeri za ljepotu:
    float *pRadius = &Radius;
    float *pPovrsina = &Povrsina;
    */

    printf("Unesi opseg: ");
    scanf("%f", &opsegO);

    izracunajParametre(opsegO, &Radius, &Povrsina);

    printf("Vrijednost povrsine: %.2f\n", Povrsina);
    printf("Vrijednost radiusa: %.2f", Radius);

    return 0;
}

void izracunajParametre(float opseg, float *pRadius, float *pPovrsina)
{
    *pRadius = opseg / (2 * PI);
    *pPovrsina = pow(*pRadius, 2) * PI;
}