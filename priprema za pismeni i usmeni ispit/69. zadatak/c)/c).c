#include <stdio.h>
#include <math.h>

int main(void)
{
    float x, n, sum = 1, pom = 1;

    do
    {
        printf("Unesi broj n: ");
        scanf("%f", &n);

        if (n < 1 || n - trunc(n) != 0)
            printf("Pogresan unos!\n");

    } while (n < 1 || n - trunc(n) != 0);

    printf("Unesi broj x: ");
    scanf("%f", &x);

    for (int i = 1; i <= n; i++)
    {
        pom = 1;
        for (int j = 1; j <= i; j++)
            pom *= j;
        sum += (pow(x, i) / pom);
    }
    printf("%.3f", sum);
    return 0;
}