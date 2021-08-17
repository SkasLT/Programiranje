#include <stdio.h>

int main(void)
{
    float x;
    int u = 1;
    do
    {
        printf("Unesi broj x: ");
        scanf("%f", &x);

        if (x < 1 || x - trunc(x) != 0)
            printf("Pogresan unos!\n");

    } while (x < 1 || x - trunc(x) != 0);

    for (int i = 1; i <= x; i++)
        u *= i;

    printf("%d", u);
    return 0;
}