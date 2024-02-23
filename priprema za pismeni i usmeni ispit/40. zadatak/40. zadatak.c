#include <stdio.h>

int main(void)
{
    int temperatura;

    printf("Unesi temperaturu: ");
    scanf("%d", &temperatura);

    if (temperatura >= -20 && temperatura <= -11)
        printf("Iznimno hladno");
    else if (temperatura >= -10 && temperatura <= -1)
        printf("Vrlo hladno");
    else if (temperatura >= 0 && temperatura <= 9)
        printf("Prohladno");
    else if (temperatura >= 10 && temperatura <= 19)
        printf("Ugodno");
    else if (temperatura >= 20 && temperatura <= 29)
        printf("Toplo");
    else if (temperatura >= 30 && temperatura <= 39)
        printf("Vruce");
    else if (temperatura >= 40 && temperatura <= 50)
        printf("Iznimno vruce");
    else
        printf("Pogresan unos");
        
    return 0;
}