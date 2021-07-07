#include <stdio.h>

int main()
{
    int x;
    printf("Unesi cetveroznamenkasti broj: ");
    scanf("%d", &x);
    if (x >= 1000 && x <= 9999)
    {
        if (x / 1000 == 1)
            printf("Jedan");
        else if (x / 1000 == 2)
            printf("dva");
        else if (x / 1000 == 3)
            printf("tri");
        else if (x / 1000 == 4)
            printf("cetiri");
        else if (x / 1000 == 5)
            printf("pet");
        else if (x / 1000 == 6)
            printf("sest");
        else if (x / 1000 == 7)
            printf("sedam");
        else if (x / 1000 == 8)
            printf("osam");
        else if (x / 1000 == 9)
            printf("devet");
    }
    else
        printf("Pogresan unos");
}