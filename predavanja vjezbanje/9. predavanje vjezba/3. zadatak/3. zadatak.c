#include <stdio.h>
void f1(int b, int *a)
{
    int c = 3;
    *a = 3;
    b += 2;
    *a += b + c;
}
int f2(int a, int b, int c)
{
    b -= a;
    c = --b + a;
    return c;
}
void f3(int *a, int b, int *c)
{
    *c = 4;
    *a = *c + 1;
    *c = -*a;
    *c -= *a;
}
int main(main)
{
    int x = 1, y = -1, z = 2;
    int pom;

    f1(z, &y);
    printf("%d %d %d\n", x, y, z);

    pom = f2(x, y, z);
    printf("%d %d\n", pom, x + y + z);

    f3(&x, x, &y);
    printf("%d %d %d\n", x, y, z);

    return 0;
}