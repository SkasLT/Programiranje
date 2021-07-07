#include <stdio.h>
#define MAXRED 10
#define MAXSTUPAC 15

int main()
{
    int x[MAXRED][MAXSTUPAC], r, s;
    do
    {
        printf("Unesi broj redaka i stupaca: ");
        scanf("%d %d", &r, &s);
        if (r > MAXRED || r < 1 || s > MAXSTUPAC || s < 1)
            printf("Pogresan unos, unesi ponovo!\n");
    } while (r > MAXRED || r < 1 || s > MAXSTUPAC || s < 1);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%d", &x[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (x[i][j] > 0)
                printf("%d", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}