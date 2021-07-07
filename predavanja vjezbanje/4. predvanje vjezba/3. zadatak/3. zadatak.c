//Napiši program u koji će se unositi bodovi koje je student ostvario na ispitu iz Programiranja te prema sljedećoj tablici ispisati koja bi to bila ocjena:
#include <stdio.h>

int main(void)
{
    int x;
    printf("Unesi broj bodova: ");
    scanf(" %d", &x);

    if (x >= 0 && x <= 50)
        printf("nedovoljan");
    else if (x >= 51 && x <= 63)
        printf("dovoljan");
    else if (x >= 64 && x <= 76)
        printf("dobar");
    else if (x >= 77 && x <= 89)
        printf("vrlo dobar");
    else if (x >= 90 && x <= 100)
        printf("odlican");
    else if (x < 0 || x > 100)
        printf("pogresan unos");
}

