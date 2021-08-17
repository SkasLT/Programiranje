#include <stdio.h>

int main(void)
{
    int a, b, prijedzeniPut, ukupniPut;
    float razlomak;

    printf("Unesi prijedzeni put i ukupan put: ");
    scanf("%d %d", &prijedzeniPut, &ukupniPut);

    razlomak = prijedzeniPut / (float)ukupniPut;

    if (razlomak >= 0 && razlomak < 0.1)
        printf("0/5");
    else if (razlomak >= 0.1 && razlomak < 0.3)
        printf("1/5");
    else if (razlomak >= 0.3 && razlomak < 0.5)
        printf("2/5");
    else if (razlomak >= 0.5 && razlomak < 0.7)
        printf("3/5");
    else if (razlomak >= 0.7 && razlomak < 0.9)
        printf("4/5");
    else if (razlomak >= 0.9 && razlomak <= 1)
        printf("5/5");
    return 0;
}