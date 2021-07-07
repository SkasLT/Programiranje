//Odredi kako će izgledati ispis na zaslonu računala.
#include <stdio.h>

int main(void)
{
    char a = 'B', b;
    a += 2;
    b = a | 32;
    printf("%c %c\n", a, b);
    printf("%d %d", a, b);

    return 0;
}