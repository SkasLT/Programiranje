#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;

    printf("Unesi 2 broja: ");
    scanf("%d %d", &a, &b);
    
    printf("Aritmeticka: %.3f\n", (a + b) / 2.);
    printf("Geometrijska: %.3f", pow(a * b, 1/2.));

    return 0;
}