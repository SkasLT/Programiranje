#include <stdio.h>

int main(void)
{
    int r, s;
    float asredina, zbroj = 0;

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
            zbroj += x[i][j];
        }
    }
    asredina = zbroj / (r * s);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (x[i][j] < asredina)
                printf("%d\t", x[i][j]);
        }
    }
    return 0;
}