#include <stdio.h>

int main(void)
{
    int b1, b2, n1, n2, bz, nz, br, nr, bu, nu, bk, nk;
    float zbroj, razlika, umnozak, kvocjent;
    printf("Unesi brojnik 1. razlomka: ");
    scanf("%d", &b1);
    printf("Unesi nazivnik 1. razlomka: ");
    scanf("%d", &n1);
    printf("Unesi brojnik 2. razlomka: ");
    scanf("%d", &b2);
    printf("Unesi nazivnik 2. razlomka: ");
    scanf("%d", &n2);

    bz = b1 * n2 + b2 * n1;
    nz = n1 * n2;
    zbroj = (float)bz / nz;

    br = b1 * n2 - b2 * n1;
    nr = n1 * n2;
    razlika = (float)br / nr;

    bu = b1 * b2;
    nu = n1 * n2;
    umnozak = (float)bu / nu;

    bk = b1 * n2;
    nk = n1 * b2;
    kvocjent = (float)bk / nk;

    printf("%d/%d + %d/%d = %d/%d = %.2f\n", b1, n1, b2, n2, bz, nz, zbroj);
    printf("%d/%d - %d/%d = %d/%d = %.2f\n", b1, n1, b2, n2, br, nr, razlika);
    printf("%d/%d * %d/%d = %d/%d = %.2f\n", b1, n1, b2, n2, bu, nu, umnozak);
    printf("%d/%d : %d/%d = %d/%d = %.2f\n", b1, n1, b2, n2, bk, nk, kvocjent);

    return 0;
}