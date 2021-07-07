#include <stdio.h> //direktive
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float a, b, c;
    float pom1, pom2;

    printf("Utipkaj tri decimalna broja: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Ucitani brojevi su:\n");
    printf("a = %.3f\nb = %.3f\nc = %.3f", a, b, c);

    pom1 = fabs(a - trunc(a)); // a - int(a)
    pom2 = a;

    if (fabs(b - trunc(b)) > pom1)
    {
        pom1 = fabs(b - trunc(b));
        pom2 = b;
    }

    if (fabs(c - trunc(c)) > pom1)
    {
        pom1 = fabs(c - trunc(c));
        pom2 = c;
    }

    printf("\nNajveci decimalni dio je: %.3f\n", pom1);
    printf("%f\n", round(pom2));
}