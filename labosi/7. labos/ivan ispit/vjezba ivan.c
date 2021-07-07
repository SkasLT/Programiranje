#include <stdio.h>

int main()
{
    int n, popunjenihIspita = 0, praznihIspita = 0;
    char prazanIspunjen;

    do
    {
        printf("\nUnesi broj ucenika: ");
        scanf(" %d", &n);

        if (n < 0)
            printf("Pogresan unos, unesite ponovo!");

    } while (n < 0);

    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("\nPrazan ili ispunjen ispit (A za prazan B za ispunjen): ");
            scanf(" %c", &prazanIspunjen);

            if ((prazanIspunjen != 'A') && (prazanIspunjen != 'B'))
            {
                printf("Krivi unos za popunjenost ispita, unesite ponovo!");
            }

        } while ((prazanIspunjen != 'A') && (prazanIspunjen != 'B'));

        if (prazanIspunjen == 'A')
            praznihIspita++;
        else if (prazanIspunjen == 'B')
            popunjenihIspita++;
    }
    printf("Broj praznih ispita: %d", praznihIspita);
    return 0;
}