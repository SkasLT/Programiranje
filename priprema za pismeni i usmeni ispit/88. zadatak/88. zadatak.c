#include <stdio.h>

int main(void)
{
    int brojac = 0, pom;
    float x;

    printf("Unesi cijeli pozitivan broj: ");
    scanf("%f", &x);
    if ((x - trunc(x) != 0) || x < 0)
    {
        printf("Pogresan unos");
        return 1;
    }
    pom = x;

    while (pom != 0)
    {
        brojac += pom & 1;
        pom >>= 1;
    }
    printf("%d", brojac);
}