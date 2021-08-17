#include <stdio.h>

int main(void)
{
    int m, n, s = 0, counter = 0;
    printf("Unesi granice od koliko brojeva se racuna aritmeticka sredina: ");
    scanf("%d %d", &m, &n);
    int i = m;

    do
    {
        s += i;
        counter++;
        i++;
    } while (i <= n);

    printf("%.3f", s / (float)counter);
    return 0;
}