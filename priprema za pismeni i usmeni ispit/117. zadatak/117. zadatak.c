#include <stdio.h>

float Apsolutna(float x)
{
    if (x < 0)
        x *= -1;
    return x;
}

int main(void)
{
    float a, b, y;

    do
    {
        printf("Unesi 2 racionalna broja a,b: ");
        scanf("%f %f", &a, &b);

        if ((a < -10 || a > 10) || (b < -10 || b > 10))
            printf("Pogresan unos, unesite ponovo!");
    } while ((a < -10 || a > 10) || (b < -10 || b > 10));

    if (Apsolutna(a + b) == 0)
    {
        printf("Vrijednost u nazivniku je 0");
        return 1;
    }

    else
    {
        y = Apsolutna((Apsolutna(a) - 2 * Apsolutna(b)) / (Apsolutna(a + b)));
        printf("%.3f", y);
    }
    return 0;
}