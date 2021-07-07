/*
a)    Kolika je vrijednost varijable n nakon izvođenja zadanog programa?

b)    Kolika je vrijednost varijable m nakon izvođenja zadanog programa?
*/
#include <stdio.h>

int main(void)
{
    int n, m, i, j, k;
    n = 0;
    m = 0;
    for (i = 5; i < 10; i++)
    {
        k = 0;
        for (j = 1; j < i; j++)
            if (i % j == 0)
                k = k + j;
        if (k == i)
        {
            n = i;
            m = m + 1;
        }
    }
    printf("n = %d, m = %d", n, m);
    return 0;
}