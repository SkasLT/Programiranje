#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void provjera(FILE *datoteka)
{
    FILE *rezultat;
    rezultat = fopen("rezultat.txt", "w");
    if (rezultat == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke.");
        exit(1);
    }

    //char rijec[100];
    char c;
    //int brojac = 0, x;

    while (!feof(datoteka))
    {
        fscanf(datoteka, "%c", &c);
        //x = strlen(rijec);

        //if (x > 7)
        //{
            fprintf(rezultat, "%c", c);
           // printf("%s\n", c);
           // brojac++;
        //}
    }
    //printf("Broj rijeci sa vise od 7 slova: %d", brojac);
    fclose(rezultat);
}
int main()
{
    FILE *datoteka;
    datoteka = fopen("rijeci.txt", "r");
    if (datoteka == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke.");
        exit(1);
    }
    provjera(datoteka);
    close(datoteka);
    return 0;
}