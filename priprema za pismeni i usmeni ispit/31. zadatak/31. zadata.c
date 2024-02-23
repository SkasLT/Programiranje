#include <stdio.h>

int main(void)
{
    int n;

    printf("Unesi zaradzeni novac: ");
    scanf("%d", &n);

    n = n - n / 5;
    n = n - n / 5;
    n = n - n / 5;

    printf("Marku je ostalo %d kuna", n);

    return 0;
}