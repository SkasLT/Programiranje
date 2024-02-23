#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Unesi predzadnji i zadnji broj: ");
    scanf("%d %d", &x, &y);

    y += 1;

    if (y == 101)
        printf("1");
    else
        printf("%d", y);

    return 0;
}