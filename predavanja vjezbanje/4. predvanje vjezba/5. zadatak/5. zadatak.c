//Odredi konačno stanje varijabli z, x i y.
#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int x = 5, y = -7, z = 0;
    bool a, b;

    a = x != y;
    b = 4;

    if (!a)
    {
        z = --x - y;
    }
    else if (b)
    {
        z += (y--) + x;
    }
    else
    {
        z = x + y--;
    }
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}