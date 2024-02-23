#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pulaz = fopen("poruka.txt", "r");
    if (pulaz == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke");
        exit(1);
    }

    FILE *pizlaz = fopen("bez_razmaka.txt", "w");
    if (pizlaz == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke");
        exit(1);
    }

    char c;
    int br = 0;

    while ((c = getc(pulaz)) != EOF)
    {
        if (c == ' ')
            br++;
        else
            fprintf(pizlaz, "%c", c);
    }

    printf("Broj razmaka: %d", br);

    fclose(pulaz);
    fclose(pizlaz);

    return 0;
}