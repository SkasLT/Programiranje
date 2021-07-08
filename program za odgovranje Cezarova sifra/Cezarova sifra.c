#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//funkcija koja dekriptira slova iz odabrane datoteke te ih stavlja u izlaznu datoteku
void kriptiranje(FILE *datoteka, int kljuc, unsigned char *ime)
{
    FILE *kriptiraniTekst = fopen(strcat(strtok(ime, ".-"), " - kriptirano.txt"), "w"); //na izlaznu datoteku se dodaje nastavak "-kriptirano"

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
                kriptiraniZnak = (c + kljuc - 'a') % 26 + 'a'; //kriptiranje slova
                fprintf(kriptiraniTekst, "%c", kriptiraniZnak);
            }
            else if (isupper(c)) //testiranje jeli znak veliko slovo
            {
                kriptiraniZnak = (c + kljuc - 'A') % 26 + 'A'; //kriptiranje slova
                fprintf(kriptiraniTekst, "%c", kriptiraniZnak);
            }
        }
        else
            fprintf(kriptiraniTekst, "%c", c); //ispis znaka u datoteku ako nije slovo; preskakanje punktuacijskih znakova
    }
}
//funkcija koja dekriptira slova iz odabrane datoteke te ih stavlja u izlaznu datoteku
void dekriptiranje(FILE *datoteka, int kljuc, unsigned char *ime)
{
    FILE *originalniTekst = fopen(strcat(strtok(ime, ".-"), "- dekriptirano.txt"), "w"); //na izlaznu datoteku se dodaje nastavak "-dekriptirano"

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
                kriptiraniZnak = 'z' - ('z' - c + kljuc) % 26; //dekriptiranje slovo
                fprintf(originalniTekst, "%c", kriptiraniZnak);
            }
            else if (isupper(c)) //testiranje jeli znak veliko slovo
            {
                kriptiraniZnak = 'Z' - ('Z' - c + kljuc) % 26; //dekriptiranje slova
                fprintf(originalniTekst, "%c", kriptiraniZnak);
            }
        }
        else
            fprintf(originalniTekst, "%c", c); //ispis znaka u datoteku ako nije slovo; preskakanje punktuacijskih znakova
    }
}

int main()
{
    char imeOriginalneDatoteke[100] = {'\0'}; //polje u koje ce se spremiti ime datoteke koja ce se kriptirati
    char imeKriptiraneDatoteke[100] = {'\0'}; //polje u koje ce se spremiti ime datoteke koja ce se dekriptirati
    char kriptiranjeDekriptiranje;            //varijabla u kojoj se pohranjuje slovo preko kojeg se bira kriptiranje/dekriptiranje
    int uneseniKljuc;                         //varijabla u kojoj se pohranjuje kljuc za kriptiranje

    FILE *kriptiraniTekst, *originalniTekst;
    //izbor kriptiranja/dekriptiranja, unos ne ovisi o velikom ili malom slovu
    do
    {
        printf("Unesi 'K' za kriptiranje ili 'D' za dekriptiranje (nije bitno dali je veliko ili malo slovo): ");
        scanf(" %c", &kriptiranjeDekriptiranje);

        kriptiranjeDekriptiranje = toupper(kriptiranjeDekriptiranje); //uneseno slovo se pretvara u veliko, tako da unos ne ovisi jeli malo ili veliko slovo

        if (kriptiranjeDekriptiranje != 'K' && kriptiranjeDekriptiranje != 'D') //izbaci pogresku ako uneseni znak nije ni 'k' ni 'd'
            printf("Pogresan unos, unesite ponovo!\n");

    } while (kriptiranjeDekriptiranje != 'K' && kriptiranjeDekriptiranje != 'D'); //omoguci ponovan unos prilikom krivog unosa

    switch (kriptiranjeDekriptiranje) //slucaj kriptiranja ili dekriptiranja
    {
    //prilikom unesenog slova 'k' provodi se kriptiranje
    case 'K':
        //unos imena datoteke koja ce se kriptirati
        do
        {
            printf("Unesi ime datoteke koju zelite kriptirati:\n");
            scanf(" %[^\n]", imeOriginalneDatoteke);
            originalniTekst = fopen(imeOriginalneDatoteke, "r");

            //testiranje postoji li datoteka koju korisnik zeli kriptirati
            if (originalniTekst == NULL)
                printf("Uneseno ime datoteke nije valjano. Unesite ponovno.\n");

        } while (originalniTekst == NULL); //omoguci ponovan unos ako datoteka nije pronadzena
        //unos kljuca za kriptiranje
        do
        {
            printf("Unesi kljuc za dekriptiranje: ");
            scanf("%d", &uneseniKljuc);

            //testrianje jeli uneseni kljuc pozitivan cijeli broj
            if (uneseniKljuc < 0)
                printf("Uneseni kljuc mora biti pozitivni cijeli broj!\n");
        } while (uneseniKljuc < 0); //omoguci ponovan unos ako uneseni kljuc nije pozivitan cijeli broj

        kriptiranje(originalniTekst, uneseniKljuc, imeOriginalneDatoteke); //izvrsi kriptiranje teksta iz odabrane datoteke
        fclose(originalniTekst);                                           //zatvori stream
        break;
    //prilikom unesenog slova 'd' provodi se dekriptiranje
    case 'D':
        //unos imena datoteke koja ce se dekriptirati
        do
        {
            printf("Unesi ime datoteke koju zelite dekriptirati:\n");
            scanf(" %[^\n]", imeKriptiraneDatoteke);
            kriptiraniTekst = fopen(imeKriptiraneDatoteke, "r");

            //testiranje postoji li datoteka koju korisnik zeli dekriptirati
            if (kriptiraniTekst == NULL)
                printf("Uneseno ime datoteke nije valjano. Unesite ponovno.\n");

        } while (kriptiraniTekst == NULL); //omoguci ponovan unos ako datoteka nije pronadzena
        //unos kljuca za kriptiranje
        do
        {
            printf("Unesi kljuc za dekriptiranje: ");
            scanf("%d", &uneseniKljuc);

            //testrianje jeli uneseni kljuc pozitivan cijeli broj
            if (uneseniKljuc < 0)
                printf("Uneseni kljuc mora biti pozitivni cijeli broj!\n");
        } while (uneseniKljuc < 0); //omoguci ponovan unos ako uneseni kljuc nije pozivitan cijeli broj

        dekriptiranje(kriptiraniTekst, uneseniKljuc, imeKriptiraneDatoteke); //izvrsi dekriptiranje teksta iz odabrane datoteke
        fclose(kriptiraniTekst);                                             //zatvori stream
        break;
    }
    system("pause"); //press any key to continue (program izadze kad se koristi kao .exe file)
    return 0;
}