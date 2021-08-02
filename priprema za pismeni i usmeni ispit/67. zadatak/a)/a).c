#include <stdio.h>

int main()
{
    int n, suma = 0, pom;
    printf("Unesi prirodni cijeli broj: ");
    scanf("%d", &n);
    while (n > 0)
    {
        pom = n % 10;
        suma += pom;
        n /= 10;
    }
    printf("suma znamenki: %d", suma);
}