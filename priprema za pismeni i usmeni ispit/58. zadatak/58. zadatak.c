#include <stdio.h>

int main(void)
{
    float V;
    printf("Unesi broj KiB: ");
    scanf("%f", &V);

    if (V >= 0 && V < 12.5)
        printf("SKORO NISTA");
    else if (V >= 12.5 && V < 37.5)
        printf("SKORO JEDNA CETVRTINA");
    else if (V >= 37.5 && V < 62.5)
        printf("SKORO POLA");
    else if (V >= 62.5 && V < 87.5)
        printf("SKORO TRI CETVRTINE");
    else if (V >= 87.5 && V <= 100)
        printf("SKORO SVE");
    else
        printf("Pogresan unos");
    return 0;
}