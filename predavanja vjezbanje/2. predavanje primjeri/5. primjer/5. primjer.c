#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z;
    x = 8;
    y = fabs(round(sqrt(x)) - pow(x, 2));
    z = x - trunc(x / 3);
    printf("%.2f\n%4.3f", y, z);
    x = x + z - y;
    printf("\n%.2e", x);
    return 0;
}