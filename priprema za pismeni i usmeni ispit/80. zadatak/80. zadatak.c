#include <stdio.h>
#include <math.h>

int main(void)
{
    float y, z;

    printf("r.br.\t\tx\ty\tz\n");
    for (float x = 0; x <= 10; x++)
    {
        y = sqrt(x) + 0.2 * x - pow(x, 2) / (x + 1);
        z = y - 0.3 * (pow(y, 2) / (y + 1));
        printf("%.0f\t\t%.0f\t%.2f\t%.2f\n", x + 1, x, y, z);
    }
}