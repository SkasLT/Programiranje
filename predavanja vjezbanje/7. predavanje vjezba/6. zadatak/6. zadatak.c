#include <stdio.h>
#define MAX 50
int main()
{
    struct datum_s
    {
        int dan;
        int mjesec;
        int godina;
    };

    struct podatci_s
    {
        float bodovi;
        struct datum_s rok;
        int sifra;
    } studenti[MAX];

    int n;
    printf("Utipkaj broj studenta: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nUtpkaj podatke za %d studenta: ", i + 1);
        printf("\nBodovi: ");
        scanf("%f", &studenti[i].bodovi);
        printf("\nDatum: ");
        scanf("%d %d %d", &studenti[i].rok.dan, &studenti[i].rok.mjesec, &studenti[i].rok.godina);
        printf("\nSifra: ");
        scanf("%d", &studenti[i].sifra);
    }
    for (int i = 0; i < n; i++)
    {
        if (studenti[i].rok.mjesec == 6 && studenti[i].bodovi > 50 && studenti[i].bodovi < 70)
            printf("\nSifra: %d Bodovi: %.2f", studenti[i].sifra, studenti[i].bodovi);
    }
}