#include <stdio.h>

int main()
{
    int a = 3, b = 2;
    a = a + 3;
    b = a - 3;
    b = b + 2 * a;
    printf("%d %4o\n%3d", a, b, a % b);

    return 0;
}