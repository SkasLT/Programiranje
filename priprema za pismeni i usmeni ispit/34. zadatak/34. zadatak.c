#include <stdio.h>

int main(void)
{
    float a, b, c, nagrada;

    printf("Unesi koliko je ulozila 1. osoba: ");
    scanf("%f", &a);

    printf("Unesi koliko je ulozila 2. osoba: ");
    scanf("%f", &b);

    printf("Unesi koliko je ulozila 3. osoba: ");
    scanf("%f", &c);

    printf("Unesi koliko je iznosila novcana nagrada: ");
    scanf("%f", &nagrada);
    
    printf("1. osoba je osvojila: %.2f kuna\n", nagrada * (a / (a + b + c)));
    printf("2. osoba je osvojila: %.2f kuna\n", nagrada * (b / (a + b + c)));
    printf("3. osoba je osvojila: %.2f kuna\n", nagrada * (c / (a + b + c)));

    return 0;
}