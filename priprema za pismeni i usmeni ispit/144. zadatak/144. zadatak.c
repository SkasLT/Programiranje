#include <stdio.h>

int znanstveniZapis(float *ulaz)
{
    int exponent = 0;

    while (*ulaz < 1)
    {
        *ulaz *= 10;
        exponent--;
    }

    while (*ulaz > 10)
    {
        *ulaz /= (float)10;
        exponent++;
    }

    return exponent;
}

int main()
{
    float x;
    printf("unesi broj: ");
    scanf("%f", &x);

    int c = znanstveniZapis(&x);

    printf("%.3f * 10 ^ %d", x, c);
    return 0;
}