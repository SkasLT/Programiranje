#include <stdio.h>

int main()
{

    float R1, R2, Rs, Rp;

    printf("Unesi vrijednost R1: ");
    scanf("%f", &R1);
    printf("Unesi vrijednost R2: ");
    scanf("%f", &R2);
    Rs = R1 + R2;
    Rp = R1 * R2 / (R1 + R2);
    printf("Serijski otpor je: %.2f\n", Rs);
    printf("Paralelni otpor je: %.2f\n", Rp);
    return 0;
}