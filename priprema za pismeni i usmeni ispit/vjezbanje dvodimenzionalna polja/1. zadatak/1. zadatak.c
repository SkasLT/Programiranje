#include <stdio.h>

int main()
{
    int r, s;
    float asredina, zbroj = 0;

    do
    {
        printf("unesi dimenzije polja (redci, stupci): ");
        scanf("%d %d", &r, &s);

        if ((r < 1) && (r > 10) || (s < 1) && (s > 10))
            printf("pogresan unos, ponovite unos!");

    } while ((r < 1) && (r > 10) || (s < 1) && (s > 10));

    int x[r][s];

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%d", &x[i][j]);
            zbroj += x[i][j];
        }
    }

    asredina = zbroj / (r * s);
    printf("%.2f\n", asredina);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (x[i][j] < asredina)
                printf("%d ", x[i][j]);
        }
    }
    return 0;
}