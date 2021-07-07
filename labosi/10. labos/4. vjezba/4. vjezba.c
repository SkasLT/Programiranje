#include <stdio.h>

void Rastavi(int a, int *pa, char *ppredznak)
{
    *pa = a;

    if (a >= 0)
        *ppredznak = '+';

    else
        *ppredznak = '-';
    *pa = abs(a);
}

int main()
{
    int a, b;
    char predznak;

    do
    {
        printf("Unesi broj: ");
        scanf("%d", &a);
        Rastavi(a, &b, &predznak);
        if (a >= -9 && a <= 9)
            printf("%c %d", predznak, b);

    } while (a >= -9 && a <= 9);
}