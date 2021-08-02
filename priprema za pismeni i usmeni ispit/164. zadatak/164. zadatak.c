#include <stdio.h>
#define MAX 100

void SelectionUp(float *polje, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int iMax = i;
        for (int j = i + 1; j < size; j++)
            if (*(polje + j) < *(polje + iMax))
                iMax = j;

        float pom = *(polje + iMax);
        *(polje + iMax) = *(polje + i);
        *(polje + i) = pom;
    }
}

void SelectionDown(float *polje, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int iMax = i;
        for (int j = i + 1; j < size; j++)
            if (*(polje + j) > *(polje + iMax))
                iMax = j;

        float pom = *(polje + iMax);
        *(polje + iMax) = *(polje + i);
        *(polje + i) = pom;
    }
}

void Ucitaj(float *polje, int size)
{
    for (int i = 0; i < size; i++)
        scanf(" %f", polje + i);
}

void Ispis(float *polje, int size)
{
    for (int i = 0; i < size; i++)
        printf((i < size - 1) ? "%.2f, " : "%.2f", *(polje + i));
    printf("\n");
}

int main(void)
{
    float x[MAX];
    float y[MAX];
    int a, b;

    do
    {
        printf("Unesi dimenzije 1. i 2. polja: ");
        scanf(" %d %d", &a, &b);
        if (a > 100 || b > 100)
            printf("Krivi unos dimenzija polja, unesi ponovo!");
    } while (a > 100 || b > 100);

    Ucitaj(&x[0], a);
    Ucitaj(&y[0], b);
    SelectionUp(&x[0], a);
    SelectionDown(&y[0], b);
    Ispis(&x[0], a);
    Ispis(&y[0], b);

    return 0;
}