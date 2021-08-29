#include <stdio.h>

int rekurzivna(int x)
{
    if (x == 1)
        return -3;
    else
        return rekurzivna(x - 1) - 3 * x;
}

int main(void)
{
    int n;
    printf("Unesi n: ");
    scanf("%d", &n);
    printf("%d", rekurzivna(n));
    return 0;
}