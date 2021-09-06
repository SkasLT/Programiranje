#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int n;
    float a[MAX][MAX];
    float b[MAX][MAX];
    float c[MAX][MAX];
    float *pa = &a[0][0];
    float *pb = &b[0][0];
    float *pc = &c[0][0];

    printf("Unesi broj stupaca i redaka polja a i b: ");
    scanf("%d", &n);

    printf("Unesi elemente polja a:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", pa + n * i + j);
        }
    }

    printf("Unesi elemente polja b:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%f", pb + n * i + j);
        }
    }

    //racujanje matrice c:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
                *(pc + n * i + j) = pow(*(pa + n * i + j), 2) - pow(*(pb + n * i + j), 2);
            if (i == j)
                *(pc + n * i + j) = fabs(*(pa + n * i + j)) + fabs(*(pb + n * i + j)) + 1;
            if (i > j)
                *(pc + n * i + j) = sqrt(pow(*(pa + n * i + j), 2) + pow(*(pb + n * i + j), 2));
        }
    }

    //ispis matrice c:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.3f\t", *(pc + n * i + j));
        printf("\n");
    }
    return 0;
}