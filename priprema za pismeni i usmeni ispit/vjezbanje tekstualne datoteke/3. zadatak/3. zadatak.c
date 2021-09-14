#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void Nadodaj(FILE *pulaz)
{
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++)
        fprintf(pulaz, "\n%d", rand() % (20 + 5 + 1) - 5);
}

int main(void)
{
    FILE *pulaz = fopen("poruka.txt", "a");
    if (pulaz == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke");
        exit(1);
    }

    Nadodaj(pulaz);
    fclose(pulaz);
    return 0;
}