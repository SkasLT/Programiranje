#include <stdio.h>

int main(void)
{
    int x;
    int brojac = 0;
    
    printf("Unesi broj: ");
    scanf("%d", &x);

    brojac += x & 1;
    x >>= 1;
    brojac += x & 1;
    x >>= 1;
    brojac += x & 1;
    x >>= 1;
    brojac += x & 1;
    x >>= 1;

    printf("Zastavica postavljeno: %d", brojac);

    return 0;
}