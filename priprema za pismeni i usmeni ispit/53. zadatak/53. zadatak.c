#include <stdio.h>

int main(void)
{
    int x, jedinice, desetice;
    printf("Unesi dvoznamenkasti prirodan broj: ");
    scanf("%d", &x);

    jedinice = x % 10;
    desetice = x / 10;

    if (x < 20 && x >= 10)
    {
        switch (x)
        {
        case 10:
            printf("Deset");
            break;
        case 11:
            printf("Jedanaest");
            break;
        case 12:
            printf("Dvanaest");
            break;
        case 13:
            printf("Trinaest");
            break;
        case 14:
            printf("Cetrnaest");
            break;
        case 15:
            printf("Petnaest");
            break;
        case 16:
            printf("Sesnaest");
            break;
        case 17:
            printf("Sedamnaest");
            break;
        case 18:
            printf("Osamnaest");
            break;
        case 19:
            printf("Devetnaest");
            break;
        }
    }

    else
    {
        switch (desetice)
        {
        case 2:
            printf("Dvadeset ");
            break;
        case 3:
            printf("Trideset ");
            break;
        case 4:
            printf("Cetrdeset ");
            break;
        case 5:
            printf("Pedeset ");
            break;
        case 6:
            printf("Sesdeset ");
            break;
        case 7:
            printf("Sedamdeset ");
            break;
        case 8:
            printf("Osamdeset ");
            break;
        case 9:
            printf("Devedeset ");
            break;
        default:
            printf("Pogresan unos");
            return 1;
        }

        switch (jedinice)
        {
        case 1:
            printf("jedan");
            break;
        case 2:
            printf("dva");
            break;
        case 3:
            printf("tri");
            break;
        case 4:
            printf("cetiri");
            break;
        case 5:
            printf("pet");
            break;
        case 6:
            printf("sest");
            break;
        case 7:
            printf("sedam");
            break;
        case 8:
            printf("osam");
            break;
        case 9:
            printf("devet");
            break;
        }
    }
    return 0;
}