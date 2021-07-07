#include <stdio.h>
#define MAXRED 10
#define MAXSTUPAC 15

int main()
{
    float x[MAXRED][MAXSTUPAC];
    int s, r;
    do
    {
        printf("Unesi broj redaka i stupaca: ");
        scanf("%d %d", &r, &s);
        if (s > MAXSTUPAC || s < 1 || r > MAXRED || r < 1)
            printf("Pogresan unos, unesite ponovo!\n");
    } while (s > MAXSTUPAC || s < 1 || r > MAXRED || r < 1);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%f", &x[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (x[i][j] > 0)
                printf("%4.2f", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
