#include <stdio.h>

int main()
{
    int x;
    printf("Upisite broj: ");
    scanf("%d", &x);
    if (x == 0)
        printf("Funkcije nije definirana za x = 0");
    else
        printf("f(%d) = %.2f", x, abs(x - 2) + (1. / x));
    return 0;
}