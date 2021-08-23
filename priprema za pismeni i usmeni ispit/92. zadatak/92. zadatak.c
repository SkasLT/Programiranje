#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int n;
    float x, y, z;

    printf("Broj trokuta: ");
    scanf("%d", &n);

    float broj_trokuta[n * 3];

    for (int i = 0; i < n; i++)
    {
        printf("Moguce stranice %d. trokuta:\n", i + 1);
        printf("a = ");
        scanf("%f", &broj_trokuta[i * n + 0]);
        printf("b = ");
        scanf("%f", &broj_trokuta[i * n + 1]);
        printf("c = ");
        scanf("%f", &broj_trokuta[i * n + 2]);
    }

    printf("a\tb\tc\todgovor");

    for (int j = 0; j < n; j++)
    {
        x = broj_trokuta[j * n + 0];
        y = broj_trokuta[j * n + 1];
        z = broj_trokuta[j * n + 2];

        printf("\n%.1f\t%.1f\t%.1f\t", x, y, z);

        if (((x + y) > z) && (abs(x - y) < z))
            printf("da");
        else
            printf("ne");
    }
    return 0;
}