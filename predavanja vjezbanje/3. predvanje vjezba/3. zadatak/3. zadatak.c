//Odredi konačno stanje varijabli a i b.
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x = 3, y = 11, z = -5;
    bool a, b;

    a = !((x < y) || (y != z) && (x >= z));
    b = !(x >= y) && (x - 2 < z) || (x + 8 == y);
    printf("%d\n%d", a, b);

    return 0;
}