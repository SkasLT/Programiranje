#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, re, im, D, x1, x2;

    printf("Unesi a,b,c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = (pow(b, 2) - 4 * a * c);

    if (a == 0)
        printf("a nije valjan");
    else if (D >= 0)
    {
        x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

        if (x1 == x2)
            printf("x1 = x2 = %.3f", x1);
        else
            printf("x1 = %.3f\nx2 = %.3f", x1, x2);
    }

    else if (D < 0)
    {
        re = -(b / (2 * a));
        im = sqrt(fabs(D)) / (2 * a);
        printf("x1 = %.3f + %.3fi\nx2 = %.3f - %.3fi", re, im, re, im);
    }
    return 0;
}