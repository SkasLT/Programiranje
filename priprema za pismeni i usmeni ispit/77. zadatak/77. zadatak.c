#include <stdio.h>

int main(void)
{
    float i = 1, rez;

    printf("x\t\tf(x)\n");
    while (i < 2.2)
    {
        rez = 41.926 * sqrt(1 + pow(i, 3));
        printf("%.2f\t\t%.2f\n", i, rez);
        i += 0.2;
    }
    return 0;
}