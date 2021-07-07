//Odredi konačno stanje varijabli x i y.
#include <stdio.h>

int main(void)
{
    int x = 13, y;

    switch (x % 3)
    {
    case 1:
        y = x--;
        x--;
    case 2:
        y = --x;
        x++;
    case 0:
        y = x++;
        y--;
        break;
    default:
        printf("Pogreska.");
    }
    printf("x = %d, y = %d", x, y);
    return 0;
}