#include <stdio.h>

int main(void)
{
    int x;
    int prva, druga, treca, cetvrta;

    printf("Unesi broj: ");
    scanf("%d", &x);

    prva = (x & (1 << (1 - 1))) >> (1 - 1);
    druga = (x & (1 << (2 - 1))) >> (2 - 1);
    treca = (x & (1 << (3 - 1))) >> (3 - 1);
    cetvrta = (x & (1 << (4 - 1))) >> (4 - 1);

    printf("Zastavica postavljeno: %d", prva + druga + treca + cetvrta);

    return 0;
}