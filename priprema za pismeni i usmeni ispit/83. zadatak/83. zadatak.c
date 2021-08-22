#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    int o, broj_P = 0, broj_N = 0, suma_P = 0, suma_N = 0;
    do
    {
        printf("Unesi broj studenata n: ");
        scanf("%f", &n);
        if ((n - trunc(n) != 0) || (n < 1) || (n > 30))
            printf("Krivi unos! Unesite ponovo\n");
    } while ((n - trunc(n) != 0) || (n < 1) || (n > 30));

    if (n == 1)
    {
        broj_N = 1;
        broj_P = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("Ocjena %d. studenta: ", i);
        scanf("%d", &o);

        if (i % 2 == 0)
        {
            suma_P += o;
            broj_P++;
        }

        else if (i % 2 == 1)
        {
            suma_N += o;
            broj_N++;
        }
    }

    printf("%.2f\n%.2f\n", suma_P / (float)broj_P, suma_N / (float)broj_N);

    if (suma_P / (float)broj_P > suma_N / (float)broj_N)
        printf("P");
    else if (suma_P / (float)broj_P < suma_N / (float)broj_N)
        printf("N");
    else
        printf("PN");

    return 0;
}