#include <stdio.h>

int main(void)
{
    int jedinice, dvojke, trojke, cetvorke, petice;
    float prosjek;

    printf("Unesi broj jedinica: ");
    scanf("%d", &jedinice);
    printf("Unesi broj dvojki: ");
    scanf("%d", &dvojke);
    printf("Unesi broj trojki: ");
    scanf("%d", &trojke);
    printf("Unesi broj cetvorki: ");
    scanf("%d", &cetvorke);
    printf("Unesi broj petica: ");
    scanf("%d", &petice);

    prosjek = (jedinice + 2 * dvojke + 3 * trojke + 4 * cetvorke + 5 * petice) / (float)(jedinice + dvojke + trojke + cetvorke + petice);

    printf("%.2f\n", prosjek);
    if (jedinice > 1)
        printf("Nedovoljan");
    else if (prosjek >= 2 && prosjek < 2.5)
        printf("Dovoljan");
    else if (prosjek >= 2.5 && prosjek < 3.5)
        printf("Dobar");
    else if (prosjek >= 3.5 && prosjek < 4.5)
        printf("Vrlo dobar");
    else if (prosjek >= 4.5 && prosjek <= 5)
        printf("Odlican");

    return 0;
}