///Zadan je program. Odredi koliko iznose konačne vrijednosti varijabli a, b, c i d.
#include <stdio.h>

int main(void)
{
    int a = 0, b = 1, c = 2, d = 3;

    a = (++b) - (c--);
    printf("1. stage:\na = %d\nb = %d\nc = %d\n", a, b, c);

    b += (a--) + d;
    printf("2. stage:\na = %d\nb = %d\nd = %d\n", a, b, d);

    d -= a - c;
    printf("3. stage:\na = %d\nc = %d\nd = %d\n", a, c, d);
    printf("final:\na = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);

    return 0;
}