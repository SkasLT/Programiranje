#include <stdio.h>

#define KONST 3
int main()
{
    float x = 11.5;
    float a, y;

    scanf("%f", &y);

    a = KONST + x - 2 * y;
    x = x + 1;
    a = 2 - x - y;

    printf("%.2f\n%.3f\n%f", a, x, y);

    return 0;
}