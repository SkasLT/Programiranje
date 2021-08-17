#include <stdio.h>

int main(void)
{
    int prviDanTin, drugiDanTin, treciDanTin, cetvrtiDanTin, prviDanTan, drugiDanTan, treciDanTan, cetvrtiDanTan;

    printf("Unesi koliko je Tin napravio koraka za 1. dan: ");
    scanf("%d", &prviDanTin);
    printf("Unesi koliko je Tin napravio koraka za 2. dan: ");
    scanf("%d", &drugiDanTin);
    printf("Unesi koliko je Tin napravio koraka za 3. dan: ");
    scanf("%d", &treciDanTin);
    printf("Unesi koliko je Tin napravio koraka za 4. dan: ");
    scanf("%d", &cetvrtiDanTin);

    printf("Unesi koliko je Tan napravio koraka za 1. dan: ");
    scanf("%d", &prviDanTan);
    printf("Unesi koliko je Tan napravio koraka za 2. dan: ");
    scanf("%d", &drugiDanTan);
    printf("Unesi koliko je Tan napravio koraka za 3. dan: ");
    scanf("%d", &treciDanTan);
    printf("Unesi koliko je Tan napravio koraka za 4. dan: ");
    scanf("%d", &cetvrtiDanTan);

    if (prviDanTin > prviDanTan)
        printf("Tin\n");
    else
        printf("Tan\n");

    if (drugiDanTin > drugiDanTan)
        printf("Tin\n");
    else
        printf("Tan\n");

    if (treciDanTin > treciDanTan)
        printf("Tin\n");
    else
        printf("Tan\n");

    if (cetvrtiDanTin > cetvrtiDanTan)
        printf("Tin\n");
    else
        printf("Tan\n");
    return 0;
}