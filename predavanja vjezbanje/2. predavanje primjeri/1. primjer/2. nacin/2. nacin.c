#include <stdio.h>

int main()
{
    float R1, R2;
    printf("Unesi vrijednos prvog i drugog otpora: ");
    scanf("%f %f", &R1, &R2);
    printf("Serijski otpor: %.2f\nParalelni otpor: %.2f\n", R1 + R2, R1 * R2 / (R1 + R2));
    return 0;
}