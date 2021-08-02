#include <stdio.h>
#include <math.h>

int main()
{
    float a1, b1, pab, qab;
    printf("a\tb\tcos(a) - cos(b) \t- 2 * sin((a + b)/2) * sin((a - b)/2)\n");

    for (int a = 1; a <= 5; a++)
    {
        a1 = (float)a / 10;
        for (int b = 1; b <= 2; b++)
        {
            b1 = (float)b / 10;
            pab = cos(a1) - cos(b1);
            qab = -2 * sin((a1 + b1) / 2) * sin((a1 - b1) / 2);
            printf("%.1f\t%.1f\t%.3f\t\t\t%.3f\t", a1, b1, pab, qab);
            printf("\n");
        }
    }
    return 0;
}