#include <stdio.h> //direktive
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float a, b, c;
    float *pa, *pb, *pc;
    float pom1, pom2;
    float *ppom1, *ppom2;
    pa = &a;
    pb = &b;
    pc = &c;
    ppom1 = &pom1;
    ppom2 = &pom2;

    printf("Utipkaj tri decimalna broja: ");
    scanf("%f %f %f", pa, pb, pc);

    printf("Ucitani brojevi su:\n");
    printf("a = %.3f\nb = %.3f\nc = %.3f", *pa, *pb, *pc);

    *ppom1 = fabs(*pa - trunc(*pa)); // a - int(a)
    *ppom2 = *pa;

    if (fabs(*pb - trunc(*pb)) > *ppom1)
    {
        *ppom1 = fabs(*pb - trunc(*pb));
        *ppom2 = *pb;
    }

    if (fabs(*pc - trunc(*pc)) > *ppom1)
    {
        *ppom1 = fabs(*pc - trunc(*pc));
        *ppom2 = *pc;
    }

    printf("\nNajveci decimalni dio je: %.3f\n", *ppom1);
    printf("%f\n", round(*ppom2));
}