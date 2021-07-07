/*
a)    Kolika je vrijednost varijable p nakon izvođenja zadanog programa?

b)    Kolika je vrijednost varijable k nakon izvođenja zadanog programa?
*/
#include <stdio.h>

int main(void)
{
    int a, b, t, p, k;
    a = 12;
    b = 18;
    t = 0;
    p = a + b;
    k = 0;
    do
    {
        if (p % a == 0 && p % b == 0)
            t = t + 1;
        else
            p = p + 1;
        k = k + 1;
    } while (t == 0);
    printf("p = %d, k = %d", p, k);
    return 0;
}