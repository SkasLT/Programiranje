#include <stdio.h>

int Rekurzivna_suma(int n)
{
    if (n > 1)
        return Rekurzivna_suma(n - 1) + n;
    return 1;
}

int Iterativna_suma(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int Direktna_suma(int n)
{
    return (n * (n + 1)) / 2;
}

int main(void)
{
    int n;
    printf("Unesi broj n: ");
    scanf("%d", &n);
    printf("Direktna suma: %d\n", Direktna_suma(n));
    printf("Induktivna suma: %d\n", Iterativna_suma(n));
    printf("Rekurzivna suma: %d\n", Rekurzivna_suma(n));
    return 0;
}