#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float rekurzivna_dva_plus(const unsigned int n)
{
    if (n > 1)
        return sqrt(2 + rekurzivna_dva_plus(n - 1));
    return sqrt(2);
}

float rekurzivna_tri_puta(const unsigned int n)
{
    if (n > 1)
        return sqrt(3 * rekurzivna_tri_puta(n - 1));
    return sqrt(3);
}

int main()
{
    int n;
    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);
    printf("a) %.3f\n", rekurzivna_dva_plus(n));
    printf("b) %.3f", rekurzivna_tri_puta(n));
    return 0;
}