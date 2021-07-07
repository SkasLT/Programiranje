#include <stdio.h>

int *Minmax(int *prvo, int *drugo, int prvoMax, int drugoMax)
{
    int a[2] = {0};
    int *polje = &a[0];

    int min = *(prvo);
    int max = *(drugo);

    for (int i = 0; i < prvoMax; i++)
        if (min > *(prvo + i))
            min = *(prvo + i);

    for (int i = 0; i < drugoMax; i++)
        if (max < *(drugo + i))
            max = *(drugo + i);

    *(polje) = min;
    *(polje + 1) = max;

    return polje;
}

int main(void)
{
    int x, y;
    printf("Unesi dimenzije 1. polja: ");
    scanf("%d", &x);
    int prvo[x];

    for (int i = 0; i < x; i++)
        scanf(" %d", &prvo[i]);

    printf("Unesi dimenzije 2. polja: ");
    scanf("%d", &y);

    int drugo[y];

    for (int i = 0; i < y; i++)
        scanf(" %d", &drugo[i]);

    int *polje = Minmax(&prvo[0], &drugo[0], x, y);

    printf("%d %d", *(polje), *(polje + 1));
    return 0;
}