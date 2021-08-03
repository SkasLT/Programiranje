#include <stdio.h>

int main(void)
{
    float n;
    printf("Unesi zaradzeni novac: ");
    scanf("%f", &n);
    n = n - n / 5;
    n = n - n / 5;
    n = n - n / 5;
    printf("Marku je ostalo %.0f kuna", n);
    return 0;
}