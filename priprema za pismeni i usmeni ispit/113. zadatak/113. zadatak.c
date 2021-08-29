#include <stdio.h>

int main(void)
{
    int n;
    int broj_dovoljnih = 0;
    int zbroj_ocjena = 0;

    struct veleuciliste_s
    {
        char ime[20 + 1];
        char prezime[20 + 1];
        float bodovi;
        int ocjena;
    } studenti[30];

    do
    {
        printf("Unesi broj ucenika: ");
        scanf("%d", &n);

        if ((n < 1) || (n > 30))
            printf("Pogresan unos, unesite ponovo!\n");

    } while ((n < 1) || (n > 30));

    for (int i = 0; i < n; i++)
    {
        printf("%d. student:\n", i + 1);

        printf("Ime studenta: ");
        scanf("%s", studenti[i].ime);

        printf("Prezime studenta:  ");
        scanf("%s", studenti[i].prezime);

        printf("Ostvareni bodovi: ");
        scanf("%f", &studenti[i].bodovi);

        printf("Ostvarena ocjena: ");
        scanf("%d", &studenti[i].ocjena);
    }
    for (int i = 0; i < n; i++)
    {
        zbroj_ocjena += studenti[i].ocjena;

        if (studenti[i].ocjena == 2)
            broj_dovoljnih++;
        if (studenti[i].bodovi > 5 && studenti[i].bodovi < 15)
            printf("%s\n", studenti[i].prezime);
    }
    printf("Broj studenata sa ocjenom dovoljan: %d\n", broj_dovoljnih);
    printf("Prosjek svih ocjena studenata: %.2f", zbroj_ocjena / (float)n);

    return 0;
}