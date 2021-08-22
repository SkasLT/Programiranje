#include <stdio.h>

int main(void)
{
    int n;
    unsigned long long int nFaktorijela;
    float sum = 1;

    do
    {
        printf("Unesi broj n koji je manji od 100: ");
        scanf("%d", &n);
        if (n >= 100)
            printf("Pogresan unos, unesite ponovo!\n");
    } while (n >= 100);

    for (int i = 2; i <= n; i++)
    {
        nFaktorijela = 1;

        for (int j = 2; j <= i; j++)
            nFaktorijela *= j;

        sum *= (1 + 1 / (float)nFaktorijela);
    }

    printf("%.3f", sum);
    return 0;
}