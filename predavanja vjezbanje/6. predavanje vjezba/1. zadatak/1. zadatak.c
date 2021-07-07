/*
Učitati niz znakova (koji može sadržavati i praznine) te ispisati koliko u zadanom nizu ima malih slova, znamenki i uskličnika. Ispisati i poruku koja je učitana.

Ulaz

programiranje JE ZA 5!

Izlaz

Ucitali ste recenicu: programiranje JE ZA 5!

Malih slova: 13

Znamenki: 1

Usklicnika: 1
*/
#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    int n, znamenke = 0, mslova = 0, usklicnik = 0;
    char x[MAX + 1];

    printf("Unesi recenicu: ");
    gets(x);
    n = strlen(x);

    for (int i = 0; i < n; i++)
    {
        if (islower(x[i]))
            mslova++;
        else if (isdigit(x[i]))
            znamenke++;
        else if (x[i] == 33)
            usklicnik++;
    }

    printf("Ucitali ste recenicu: ");

    for (int i = 0; i < n; i++)

    printf("%c", x[i]);

    printf("\nBroj malih slova: %d\nBroj znamenki: %d\nBroj usklicnika: %d", mslova, znamenke, usklicnik);
    return 0;
}