//Odredi kako će izgledati ispis na zaslonu računala.
#include <stdio.h>

int main(void)
{
    int a = -11, b = 2;
    printf("%d %d %d %d", a << b, a >> b, a & b, a | b);
    return 0;
}