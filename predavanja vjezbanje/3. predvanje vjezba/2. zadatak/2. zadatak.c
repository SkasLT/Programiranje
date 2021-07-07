//Odredi kako će izgledati ispis na zaslonu računala. Jedan kvadratić u prikazanoj mreži predstavlja jedno mjesto za ispis na zaslonu računala.
#include <stdio.h>

int main(void)
{
    int x = 30, y, z = -4;
    x %= 7;
    y = ~x | 3 & z;
    printf("\n%2d\n%3d\n%d", x, y, z);

    return 0;
}