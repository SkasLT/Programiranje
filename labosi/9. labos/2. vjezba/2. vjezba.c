#include <stdio.h>

int Min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int Max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y, z;

    printf("Unesi 3 broja x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);

    if ((x > 10 || x < -10) || (y > 10 || y < -10) && (z > 10 || z < -10))
        printf("Krivi unos, kraj programa");

    else if (Max(x, Min(y, z)) == 0)
        printf("U nazivniki je 0!");

    else
        printf("%3.f", (2.0 * Min(x, y)) / Max(x, Min(y, z)));

    return 0;
}