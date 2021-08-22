#include <stdio.h>

int main(void)
{
    int n, Tin = 0, Marko = 0, uvjet = 1, trenutak;
    char c;
    do
    {
        printf("Unesi broj gostiju: ");
        scanf("%d", &n);
        if ((n > 1 || n < 15) && n % 2 == 0)
            printf("Pogresan unos , unesite ponovo!\n");
    } while ((n > 1 || n < 15) && n % 2 == 0);

    for (int i = 1; i <= n; i++)
    {
        printf("Za kog je glasao %d. gost: ", i);
        scanf(" %c", &c);

        if (c == 'T')
            Tin++;
        else if (c == 'M')
            Marko++;

        if (((Marko == (n + 1) / 2) || (Tin == (n + 1) / 2)) && (uvjet == 1))
        {
            trenutak = i;
            uvjet = 0;
        }
    }
    if (Marko > Tin)
        printf("%d\n", Marko);
    else
        printf("%d\n", Tin);

    printf("%d", trenutak);

    return 0;
}