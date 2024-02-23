#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    float rez;
    
    printf("Unesi racionalni argument funkcije: ");
    scanf("%d", &x);

    if (x < -1)
    {
        rez = (x + 1) ^ (1 / 3);
        printf("f(%d) = %.3f", x, rez);
    }
    else if ((x >= -1) && (x < 4) && (x != 0))
    {
        rez = 2 / (float)(x + 2 * abs(x));
        printf("f(%d) = %.3f", x, rez);
    }
    else if (x >= 4)
    {
        rez = 2 / (sqrt(pow(x, 2) + 5));
        printf("f(%d) = %.3f", x, rez);
    }
    else if (x == 0)
        printf("Funkcija nije definirana za x = 0");

    return 0;
}