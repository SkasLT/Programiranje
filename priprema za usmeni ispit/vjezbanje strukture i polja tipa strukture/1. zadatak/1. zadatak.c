#include <stdio.h>
#define MAX 30
int main(void)
{
    struct veleuciliste_s
    {
        char ime[20 + 1];
        char prezime[20 + 1];
        int bodovi;
        int ocjena;
    } studenti[MAX];

    int n, brojacDvojki = 0;
    float zbroj = 0, prosijek;

    printf("Unesi broj ucenika: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d. student:\n", i + 1);

        printf("Ime: ");
        scanf("%s", &studenti[i].ime);

        printf("Prezime: ");
        scanf("%s", &studenti[i].prezime);

        printf("Bodovi: ");
        scanf("%d", &studenti[i].bodovi);

        printf("Ocjena: ");
        scanf("%d", &studenti[i].ocjena);
    }

    for (int i = 0; i < n; i++)
    {
        if (studenti[i].ocjena == 2)
            brojacDvojki++;
        zbroj += studenti[i].ocjena;

        if ((studenti[i].bodovi > 5) && (studenti[i].bodovi < 15))
            printf("%s\n", studenti[i].prezime);
    }

    prosijek = zbroj / n;

    printf("Prosijek ocjena je: %.2f\n", prosijek);
    printf("Broj ucenika koji su dobili ocjenu 2: %d", brojacDvojki);

    return 0;
}