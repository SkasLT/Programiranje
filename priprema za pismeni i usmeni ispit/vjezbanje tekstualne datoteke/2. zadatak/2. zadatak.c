#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int Broji(FILE *pulaz)
{
    char c;
    int br = 0;
    while ((c = getc(pulaz)) != EOF)
    {
        if (isspace(c))
            br++;
    }
    return br;
}

void Upis(FILE *pulaz)
{
    FILE *pizlaz = fopen("bez_razmaka.txt", "w");
    if (pulaz == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke");
        exit(2);
    }

    char c;
    while ((c = getc(pulaz)) != EOF)
    {
        if (!isspace(c))
            fprintf(pizlaz, "%c", c);
    }
    fclose(pizlaz);
}

int main(void)
{
    FILE *pulaz = fopen("poruka.txt", "r");
    if (pulaz == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke");
        exit(1);
    }

    printf("Broj razmaka: %d", Broji(pulaz));
    fseek(pulaz, 0L, SEEK_SET);
    Upis(pulaz);
}