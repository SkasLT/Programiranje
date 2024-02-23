#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5, g;
    int x[n][n];
    int *px = &x[0][0];

    printf("Ucitaj vrijednost iz intervala [0,255]:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            do
            {
                printf("x[%d][%d] = ", i, j);
                scanf("%d", px + n * i + j);

                if (*(px + n * i + j) < 0 || *(px + n * i + j) > 255)
                    printf("Pogresan unos. Ponovite unos.\n");
            } while (*(px + n * i + j) < 0 || *(px + n * i + j) > 255);
        }
    }

    printf("Ucitaj granicnu vrijednost: ");
    scanf("%d", &g);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(px + n * i + j) >= g)
                *(px + n * i + j) = 1;
            else
                *(px + n * i + j) = 0;
        }
    }
    printf("ispis izmijenjenog polja:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", *(px + n * i + j));
        printf("\n");
    }
    return 0;
}