#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int uvjet = 0;
    int odgovor;

    do
    {
        int brojac = 0;
        for (int i = 1; i <= 5; i++)
        {
            int br1 = rand() % (100 - 1 + 1) + 1;
            int br2 = rand() % (100 - 1 + 1) + 1;
            printf("%d. Koliko je %d + %d\n", i, br1, br2);
            printf("Utipkati odgovor: ");
            scanf("%d", &odgovor);

            if (br1 + br2 == odgovor)
            {
                printf("Tocno!\n\n");
                brojac++;
            }
            else
                printf("Netocno!\n\n");
        }

        printf("Rezultat: %.0f %%\n", (brojac / (float)5) * 100);
        printf("Ako zelite ponoviti igru pritisnite 1. U suprotnom pritisnite 0.\n");
        scanf("%d", &uvjet);

    } while (uvjet == 1);

    printf("Kraj igre.");
    return 0;
}