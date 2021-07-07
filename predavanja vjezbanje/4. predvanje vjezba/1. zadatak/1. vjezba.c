//Odredi kako će izgledati ispis na zaslonu računala.
#include <stdio.h>

int main(void)
{

    int x = 10, y = 2;

    if (x >> 2 > 5)
    {
        y += 1;
    }
    else
    {
        y -= 1;
    }

    x <<= y;
    printf("x(8) = %o\n", x);
    printf("x(10) = %d\n", x);

    return 0;
}