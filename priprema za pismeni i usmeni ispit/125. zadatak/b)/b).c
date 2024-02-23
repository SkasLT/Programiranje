#include <stdio.h>

double rekurzivna(int x)
{
    if (x == 1)
        return 2. / 3;
    else if (x % 2 == 0)
        return rekurzivna(x - 1) - ((2 + 3 * (x - 1)) / (3 + 4 * (float)(x - 1)));
    else
        return rekurzivna(x - 1) + ((2 + 3 * (x - 1)) / (3 + 4 * (float)(x - 1)));
}

int main(void)
{
    int n;
    printf("Unesi n: ");
    scanf("%d", &n);
    printf("%.3f", rekurzivna(n));
    return 0;
}