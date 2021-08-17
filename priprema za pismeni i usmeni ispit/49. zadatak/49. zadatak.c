#include <stdio.h>

int main(void)
{
    int x, pom;

    printf("Unesi cetveroznamenkasti prirodan broj: ");
    scanf("%d", &x);

    pom = x / 1000;

    switch (pom)
    {
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
    default:
        printf("Pogresan unos");
    }
    return 0;
}