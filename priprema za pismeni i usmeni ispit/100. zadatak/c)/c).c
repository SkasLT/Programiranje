#include <stdio.h>

int main(void)
{
    int r, s, umnozak = 1, redak_min = 0, stupac_min = 0, min;
    do
    {
        printf("Unesi dimenzije matrice (retci i stupci): ");
        scanf("%d %d", &r, &s);

        if ((r < 1) || (r > 10) || (s < 1) || (s > 10))
            printf("Pogresan unos, unesite ponovo!");

    } while ((r < 1) || (r > 10) || (s < 1) || (s > 10));
    int x[r][s];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    min = x[0][0];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (x[i][j] < min)
            {
                min = x[i][j];
                redak_min = i;
                stupac_min = j;
            }
        }
    }
    printf("Redak: %d  Stupac: %d", redak_min, stupac_min);
    return 0;
}