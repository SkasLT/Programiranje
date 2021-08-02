#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Unesi broj kojem se provjeravaju bitovi: ");
    scanf(" %d", &x);
    printf("Unesi redni broj bita koji se invertira: ");
    scanf(" %d", &y);
    printf("Kad se broju %d invertira %d. bit dobijemo broj %d", x, y, x ^ (1 << (y - 1)));
    return 0;
}