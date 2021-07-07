#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void aSredina(FILE *tekst)
{
    FILE *ispis = fopen("rezultat1.txt", "w");
    if (ispis == NULL)
    {
        printf("Pogreska pri otvaranju datoteke");
        exit(1);
    }
    float d, zbroj = 0;
    int br = 0;
    while (!feof(tekst))
    {
        fscanf(tekst, "%f", &d);
        zbroj = zbroj + d;
        br++;
    }
    printf("%f\n", (float)zbroj / br);
    fclose(ispis);
}
int main(void)
{
    FILE *tekst = fopen("brojevi.txt", "r+");
    if (tekst == NULL)
    {
        printf("Pogreska pri otvaranju datoteke");
        exit(1);
    }
    aSredina(tekst);
    fclose(tekst);
    return 0;
}