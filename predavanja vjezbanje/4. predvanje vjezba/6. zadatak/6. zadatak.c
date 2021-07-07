//Odredi kako će izgledati ispis na zaslonu računala.
#include <stdio.h>
#include <math.h>

int main(void)
{

    int x = 2;
    float a = 2.f, b = 3.f, o, p;

    switch (x << 1)
    {
    case 3:
        o = 4 * a;
        p = pow(a, 2);
        break;
    case 4:
        o = 2 * (a + b);
        p = a * b;
        break;
    default:
        printf("Pogreska.");
    }

    printf("o = %.2f\np = %.2e", o, p);

    return 0;
}