#include <stdio.h>

void Rastavi(int *pn, int *prez);

int main(void)
{
    int n, rez;
    do
    {
        printf("Unesi broj n: ");
        scanf("%d", &n);
        if (n < 1000 || n > 9999)
            printf("Pogresan unos, unesite ponovo!");
    } while (n < 1000 || n > 9999);

    Rastavi(&n, &rez);
    printf("1. broj: %d\n2. broj: %d", n, rez);
    return 0;
}

void Rastavi(int *pn, int *prez)
{
    *prez = *pn % 100;
    *pn /= 100;
}