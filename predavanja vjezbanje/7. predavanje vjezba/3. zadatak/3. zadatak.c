#include <stdio.h>
int main(void)
{
    int i, j, k;
    int x[2][2] = {4, 3, 2, 1};
    int y[2][2] = {2, 0, 1, 1};
    int z[2][2] = {0};
    int b = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                b += x[i][k] * y[k][j];
            z[i][j] = b;
            b = 0;
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%4d", z[i][j]);
        printf("\n");
    }
    return 0;
}