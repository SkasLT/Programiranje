#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(void)
{
    char ime[MAX + 1];
    char prezime[MAX + 1];
    int n1, n2;
    char c;

    FILE *pdatoteka = fopen("testiranje.txt", "w");

    if (pdatoteka == NULL)
    {
        printf("Neuspijelo otvaranje datoteka");
        exit(1);
    }

    printf("Unesi ime: ");
    gets(ime);
    n1 = strlen(ime);

    printf("Unesi prezime: ");
    gets(prezime);
    n2 = strlen(prezime);

    fprintf(pdatoteka, "%s ", ime);
    fprintf(pdatoteka, "%s", prezime);

    fclose(pdatoteka);

    pdatoteka = fopen("testiranje.txt", "r");

    while (fscanf(pdatoteka, "%c", &c) == 1)
    {
        printf("%c", c);
    }

    fclose(pdatoteka);
    return 0;
}

void unesi(FILE *pdatoteka)
{
}

void ispisi(FILE *pdatoteka)
{
}
