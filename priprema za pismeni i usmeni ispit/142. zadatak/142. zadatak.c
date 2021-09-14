#include <stdio.h>

void Rastavi(int n, int *pa, int *pb);

int main(void)
{
    int n, a, b;
    do
    {
        printf("Unesi broj n: ");
        scanf("%d", &n);
        if (n < 1000 || n > 9999)
            printf("Pogresan unos, unesite ponovo!");
    } while (n < 1000 || n > 9999);

    Rastavi(n, &a, &b);
    printf("1. broj: %d\n2. broj: %d", a, b);
    return 0;
}

void Rastavi(int n, int *pa, int *pb)
{
    *pa = n / 100;
    *pb = n % 100;
}