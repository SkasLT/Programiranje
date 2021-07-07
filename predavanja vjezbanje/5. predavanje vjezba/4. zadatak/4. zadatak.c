/*
a)    Kolika je vrijednost varijable s nakon izvođenja zadanog programa?

b)    Kolika će biti vrijednost varijable s nakon izvođenja zadanog programa ako je varijabla t = 6?
*/
#include <stdio.h>

int main(void)
{
    int t, s, i;
    t = 6;
    s = 0;
    for (i = 14; i < 28; i++)
        if (i % 10 % t == 0)
            s = s + i;
    printf("%d", s);
    return 0;
}