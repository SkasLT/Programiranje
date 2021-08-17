#include <stdio.h>

int main(void)
{
    int x;
    char a, b;
    printf("Unesi s koliko slova je oznacen red: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Unesi 1 slovo: ");
        scanf(" %c", &a);
        printf("%d", a - 64);
        break;
    case 2:
        printf("Unesi 2 slova: ");
        scanf(" %c %c", &a, &b);
        printf("%d", (a - 64) * 26 + (b - 64));
        break;
    default:
        printf("Pogresan unos");
    }
    return 0;
}