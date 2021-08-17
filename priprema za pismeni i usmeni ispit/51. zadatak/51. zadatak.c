#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, deca, decb, decc;

    printf("Unesi 3 decimalna broja: ");
    scanf("%f %f %f", &a, &b, &c);

    deca = a - trunc(a);
    decb = b - trunc(b);
    decc = c - trunc(c);

    if (deca > decb && deca > decc)
        printf("Najveci decimalni dio je: %.3f\n%.0f", deca, round(a));
    else if (decb > deca && decb > decc)
        printf("Najveci decimalni dio je: %.3f\n%.0f", decb, round(b));
    else if (decc > deca && decc > decb)
        printf("Najveci decimalni dio je: %.3f\n%.0f", decc, round(c));

    return 0;
}