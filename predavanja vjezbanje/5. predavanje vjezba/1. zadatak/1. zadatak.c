/*
a)    Što će ispisati zadani program ako se za n učita vrijednost 41?

b)    Što će ispisati zadani dio programa ako se za n učita vrijednost 25387?
*/
#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d", &n);
    k = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
            k = k + 1;
        n = n / 10;
    }
    printf("%d", k);

    return 0;
}