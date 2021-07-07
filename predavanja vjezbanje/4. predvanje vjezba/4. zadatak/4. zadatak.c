//Odredi konačno stanje varijabli a i b.
#include <stdio.h>
#include <math.h>

int main(void)
{

    float a = 2.5f, b = 0.f;

    if (a != 3 || a < 0)
    {
        b += pow(a, 2);
        a--;
    }
    else
    {
        b -= pow(a, 2);
        --a;
    }
    printf("a = %f, b = %f\n", a, b);
    return 0;
}