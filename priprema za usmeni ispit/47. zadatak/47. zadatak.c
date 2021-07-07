#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    float f1, f2, f3;
    printf("Unesi racionalni argument funkcije: ");
    scanf("%d", &x);

    if (x < -1)
    {
        f1 = (x + 1) ^ (1 / 3);
        printf("f(%d) = %.3f", x, f1);
    }
    else if ((x >= -1) && (x < 4) && (x != 0))
    {
        f2 = 2 / (float)(x + 2 * abs(x));
        printf("f(%d) = %.3f", x, f2);
    }
    else if (x >= 4)
    {
        f3 = 2 / (sqrt(pow(x, 2) + 5));
        printf("f(%d) = %.3f", x, f3);
    }
    else if (x == 0)
        printf("Funkcija nije definirana za x = 0");
    return 0;
}