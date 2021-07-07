#include <stdio.h>
#define MAXRED 10
#define MAXSTUP 10

int main()
{
    int n, m;
    float aSredina = 0;

    do
    {
        printf("Utipkaj broj redaka i broj stupaca: ");
        scanf("%d %d", &n, &m);
        if (n > MAXRED || n < 1 || m > MAXSTUP || m < 1)
            printf("Pogresan unos. Ponovite unos.\n");

    } while (n > MAXRED || n < 1 || m > MAXSTUP || m < 1);

    int x[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            aSredina += x[i][j] / (float)(n * m);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x[i][j] < aSredina)
                printf("%4d", x[i][j]);
        }
    }
    return 0;
}