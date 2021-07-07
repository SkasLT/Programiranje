#include <stdio.h>

int main()
{
    float R1, R2, R3;
    printf("Unesi vrijednosti 3 otpornika: ");
    scanf("%f %f %f", &R1, &R2, &R3);
    printf("Srednja vrijednost: %.3f\nOdstupanja\nR1 %.3f\n%R2 %.3f\nR3 %.3f", (R1 + R2 + R3) / 3, fabs((R1 + R2 + R3) / 3 - R1), fabs((R1 + R2 + R3) / 3 - R2), fabs((R1 + R2 + R3) / 3 - R3));
}