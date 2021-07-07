#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void kriptiranje(FILE *datoteka, int kljuc, unsigned char *ime)
{
    FILE *kriptiraniTekst = fopen(strcat(strtok(ime, ".-"), " - kriptirano.txt"), "w");

    char c;
    //testiranje kraja datotetke
    while (!feof(datoteka))
    {
        c = getc(datoteka);

        //izade iz while loopa ako je kraj datoteke
        if (feof(datoteka))
            break;

        //testiranje jeli znak slovo
        if (isalpha(c))
        {
            char kriptiraniZnak;

            //testiranje jeli znak malo slovo
            if (islower(c))
            {
                kriptiraniZnak = (c + kljuc - 'a') % 26 + 'a';
                fprintf(kriptiraniTekst, "%c", kriptiraniZnak);
            }
            else if (isupper(c)) //testiranje jeli znak veliko slovo
            {
                kriptiraniZnak = (c + kljuc - 'A') % 26 + 'A';
                fprintf(kriptiraniTekst, "%c", kriptiraniZnak);
            }
        }
        else
            fprintf(kriptiraniTekst, "%c", c);
    }
}

void dekriptiranje(FILE *datoteka, int kljuc, unsigned char *ime)
{
    FILE *originalniTekst = fopen(strcat(strtok(ime, ".-"), "- dekriptirano.txt"), "w");

    char c;

    //testiranje kraja datoteke
    while (!feof(datoteka))
    {
        c = getc(datoteka);

        //izade iz while loopa ako je kraj datoteke
        if (feof(datoteka))
            break;

        //testiranje jeli znak slovo
        if (isalpha(c))
        {
            char kriptiraniZnak;

            //testiranje jeli znak malo slovo
            if (islower(c))
            {
                kriptiraniZnak = 'z' - ('z' - c + kljuc) % 26;
                fprintf(originalniTekst, "%c", kriptiraniZnak);
            }
            else if (isupper(c)) //testiranje jeli znak veliko slovo
            {
                kriptiraniZnak = 'Z' - ('Z' - c + kljuc) % 26;
                fprintf(originalniTekst, "%c", kriptiraniZnak);
            }
        }
        else
            fprintf(originalniTekst, "%c", c);
    }
}

int main()
{
    char imeOriginalneDatoteke[100] = {'\0'};
    char imeKriptiraneDatoteke[100] = {'\0'};
    char kriptiranjeDekriptiranje;
    int uneseniKljuc;

    FILE *kriptiraniTekst, *originalniTekst;

    do
    {
        printf("Unesi 'K' za kriptiranje ili 'D' za dekriptiranje (nije bitno dali je veliko ili malo slovo): ");
        scanf(" %c", &kriptiranjeDekriptiranje);

        kriptiranjeDekriptiranje = toupper(kriptiranjeDekriptiranje);

        if (kriptiranjeDekriptiranje != 'K' && kriptiranjeDekriptiranje != 'D') //testiranje jeli uneseni znak K ili D
            printf("Pogresan unos, unesite ponovo!\n");

    } while (kriptiranjeDekriptiranje != 'K' && kriptiranjeDekriptiranje != 'D'); //testiranje jeli uneseni znak K ili D

    switch (kriptiranjeDekriptiranje)
    {
    case 'K':

        do
        {
            printf("Unesi ime datoteke koju zelite kriptirati:\n");
            scanf(" %[^\n]", imeOriginalneDatoteke);
            originalniTekst = fopen(imeOriginalneDatoteke, "r");

            //testiranje postoji li datoteka koju korisnik zeli kriptirati
            if (originalniTekst == NULL)
                printf("Uneseno ime datoteke nije valjano. Unesite ponovno.\n");

        } while (originalniTekst == NULL); //testiranje postoji li datoteka koju korisnik zeli kriptirati

        do
        {
            printf("Unesi kljuc za dekriptiranje: ");
            scanf("%d", &uneseniKljuc);

            //testiranje jeli uneseni kljuc veci od 0
            if (uneseniKljuc < 0)
                printf("Uneseni kljuc mora biti pozitivni cijeli broj!\n");
        } while (uneseniKljuc < 0); //testiranje jeli uneseni kljuc veci od 0

        kriptiranje(originalniTekst, uneseniKljuc, imeOriginalneDatoteke);
        fclose(originalniTekst);
        break;

    case 'D':

        do
        {
            printf("Unesi ime datoteke koju zelite dekriptirati:\n");
            scanf(" %[^\n]", imeKriptiraneDatoteke);
            kriptiraniTekst = fopen(imeKriptiraneDatoteke, "r");

            //testiranje postoji li datoteka koju korisnik zeli dekriptirati
            if (kriptiraniTekst == NULL)
                printf("Uneseno ime datoteke nije valjano. Unesite ponovno.\n");

        } while (kriptiraniTekst == NULL); //testiranje postoji li datoteka koju korisnik zeli dekriptirati

        do
        {
            printf("Unesi kljuc za dekriptiranje: ");
            scanf("%d", &uneseniKljuc);

            //testrianje jeli uneseni kljuc veci od 0
            if (uneseniKljuc < 0)
                printf("Uneseni kljuc mora biti pozitivni cijeli broj!\n");
        } while (uneseniKljuc < 0); //testrianje jeli uneseni kljuc veci od 0

        dekriptiranje(kriptiraniTekst, uneseniKljuc, imeKriptiraneDatoteke);
        fclose(kriptiraniTekst);
        break;
    }
    return 0;
}