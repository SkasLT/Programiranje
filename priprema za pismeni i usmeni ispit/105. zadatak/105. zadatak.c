#include <stdio.h>

int main(void)
{
    int redak_a, stupac_a, redak_b, stupac_b;
    int suma = 0;
    int index = 0;
    int pom;

    printf("Unesi dimenzije matrice A: ");
    scanf("%d %d", &redak_a, &stupac_a);
    printf("Unesi dimenzije matrice B: ");
    scanf("%d %d", &redak_b, &stupac_b);

    int a[redak_a][stupac_a];
    int b[redak_b][stupac_b];
    int umnozak[stupac_a][redak_b];
    int temp[redak_b * stupac_b];

    //unos podataka matrice A:
    for (int i = 0; i < redak_a; i++)
    {
        for (int j = 0; j < stupac_a; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //unos podataka matrice B:
    for (int i = 0; i < redak_b; i++)
    {
        for (int j = 0; j < stupac_b; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    //provjera dali je jednako stupaca 1. matrice i redaka 2. matrice:
    if (stupac_a == redak_b)
    {
        for (int i = 0; i < redak_b; i++)
        {
            //racunanje umnoska matrica:
            for (int j = 0; j < stupac_a; j++)
            {
                umnozak[i][j] = 0;
                for (int k = 0; k < stupac_a; k++)
                    umnozak[i][j] += a[i][k] * b[k][j];
            }
        }
        //ispis dobivene matrice:
        printf("Umnozak matrica:\n");
        for (int i = 0; i < redak_b; i++)
        {
            for (int j = 0; j < stupac_a; j++)
                printf("%d\t", umnozak[i][j]);
            printf("\n");
        }
    }
    else
    {
        //racunanje traga matrice A:
        for (int i = 0; i < redak_a; i++)
        {
            for (int j = 0; j < stupac_a; j++)
            {
                if (i == j)
                    suma += a[i][j];
            }
        }
        printf("Trag matrice A: %d\n", suma);

        //pretvaranje 2d polja u 1d polje radi lakseg bubble sortiranja:
        for (int i = 0; i < redak_b; i++)
        {
            for (int j = 0; j < stupac_b; j++)
                temp[index++] = b[i][j];
        }

        //bubble sortiranje dobivenog 1d polja:
        for (int i = 1; i < index; i++)
        {
            for (int j = 0; j < index - i - 1; j++)
            {
                if (temp[j] > temp[j + 1])
                {
                    pom = temp[j];
                    temp[j] = temp[j + 1];
                    temp[j + 1] = pom;
                }
            }
        }

        index = 0;
        //ispis sortiranog polja:
        for (int i = 0; i < redak_b; i++)
        {
            for (int j = 0; j < stupac_b; j++)
                printf("%d ", temp[index++]);
            printf("\n");
        }
    }
    return 0;
}