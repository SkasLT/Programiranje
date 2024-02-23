#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Unesi broj kojem se provjeravaju bitovi: ");
    scanf(" %d", &x);
    printf("Unesi redni broj bita za provjeru: ");
    scanf(" %d", &y);
    printf("Unesi redni broj bita za provjeru: ");
    scanf(" %d", &z);

    printf("Stanje %d. bita je %d\n", y, (x & (1 << (y - 1))) >> (y - 1));
    printf("Stanje %d. bita je %d\n", z, (x & (1 << (z - 1))) >> (z - 1));

    return 0;
}