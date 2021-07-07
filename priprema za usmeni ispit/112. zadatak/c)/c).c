#include <stdio.h>
#define MAX 30

int main(void)
{
    struct datum_s
    {
        int dan;
        int mjesec;
        int godina;
    };

    struct ispit_s
    {
        char nazivIspita[20 + 1];
        char prezime[20 + 1];
        int jmbag;
        int bodovi;
        struct datum_s datum;
    } studenti[MAX];

    int n;
    int znamenka, pom = 0;
    do
    {
        printf("Unesi broj ucenika: ");
        scanf("%d", &n);

        if ((n < 1) || (n > 30))
            printf("Pogresan unos, unesite ponovo!\n");

    } while ((n < 1) || (n > 30));

    for (int i = 0; i < n; i++)
    {
        printf("%d. ucenik:\n", i + 1);

        printf("Naziv ispita: ");
        scanf("%s", &studenti[i].nazivIspita);

        printf("Prezime: ");
        scanf("%s", &studenti[i].prezime);

        printf("JMBAG: ");
        scanf("%d", &studenti[i].jmbag);

        printf("Bodovi: ");
        scanf("%d", &studenti[i].bodovi);

        printf("Unesi dan pisanja ispita: ");
        scanf("%d", &studenti[i].datum.dan);

        printf("Unesi mjesec pisanja ispita: ");
        scanf("%d", &studenti[i].datum.mjesec);

        printf("Unesi godinu pisanja ispita: ");
        scanf("%d", &studenti[i].datum.godina);
    }

    for (int i = 0; i < n; i++)
    {
        if ((((studenti[i].jmbag % 100) >= 100) && ((studenti[i].jmbag % 100) <= 200)) || (studenti[i].prezime[1] == 'a'))
            printf("%d", studenti[i].bodovi);
    }
    return 0;
}