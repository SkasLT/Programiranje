#include <stdio.h>

int main()
{
    int n, suma = 0;
    printf("Unesi prirodni cijeli broj: ");
    scanf("%d", &n);
    
    while (n > 0)
    {
        suma += n % 10;
        n /= 10;
    }
    printf("suma znamenki: %d", suma);
}