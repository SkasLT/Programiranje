#include <stdio.h>

float rekurzivna(int x)
{
    if (x == 1)
        return 1;
    else
        return rekurzivna(x - 1) + 1 / (float)(x);
}

int main(void)
{
    int n;
    printf("Unesi n: ");
    scanf("%d", &n);
    printf("%.3f", rekurzivna(n));
    return 0;
}