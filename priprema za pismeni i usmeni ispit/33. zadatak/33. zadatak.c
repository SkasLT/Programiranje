#include <stdio.h>
#include <math.h>

#define Pi 3.14159

int main(void)
{
    float promjer, put;

    printf("Unesi daljinu puta u metrima: ");
    scanf("%f", &put);

    printf("Unesi promijer kotaca: ");
    scanf("%f", &promjer);

    printf("Broj okretaja kotaca duzinom puta: %.0f", round(put / (2 * Pi * promjer / 2)));
    
    return 0;
}