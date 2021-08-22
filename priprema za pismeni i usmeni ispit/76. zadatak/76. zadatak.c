#include <stdio.h>

int main(void)
{
    int n, min, pom;
    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    min = n % 10;

    while (n > 0)
    {
        pom = n % 10;
        if (pom < min)
            min = pom;
        n /= 10;
    }
    switch (min)
    {
    case 0:
        printf("Nula");
        break;
    case 1:
        printf("Jedan");
        break;
    case 2:
        printf("Dva");
        break;
    case 3:
        printf("Tri");
        break;
    case 4:
        printf("Cetiri");
        break;
    case 5:
        printf("Pet");
        break;
    case 6:
        printf("Sest");
        break;
    case 7:
        printf("Sedam");
        break;
    case 8:
        printf("Osam");
        break;
    case 9:
        printf("Devet");
        break;
    }
    return 0;
}