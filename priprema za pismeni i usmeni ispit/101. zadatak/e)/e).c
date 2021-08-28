#include <stdio.h>

int main(void)
{
    int n, counter = 0;
    float min;

    printf("Unesi n: ");
    scanf("%d", &n);

    if (n < 2 || n > 7)
    {
        printf("Pogrešan unos. Kraj programa.");
        return 1;
    }

    float x[n][n];
    float y[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%f", &x[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        min = x[0][i];
        for (int j = 0; j < n; j++)
        {
            if (x[j][i] < min) //zamijenio i, j; tako da sa prvo provjeravaju redci pa stupci
                min = x[j][i]; //ovdje isto
        }
        y[counter] = min;
        counter++;
    }

    for (int i = 0; i < counter; i++)
        printf("%.2f ", y[i]);
    return 0;
}