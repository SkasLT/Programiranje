#include <stdio.h>
#define MAX 100
int main(void)
{
    int n, determinanta;
    int a[MAX][MAX];
    int b[MAX][MAX];
    int *pa = &a[0][0];
    int *pb = &b[0][0];

    printf("Unesi kojeg je reda matrica a: ");
    scanf("%d", &n);

    printf("Unesi elemete matrice a:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", pa + n * i + j);
        }
    }

    if (n == 2)
    {
        determinanta = *pa * *(pa + 3) - *(pa + 1) * *(pa + 2); //determinanta = ad - bc; a[2][2] = {{a,b},{c,d}}
        *pb = *(pa + 3);
        *(pb + 1) = -*(pa + 1);
        *(pb + 2) = -*(pa + 2);
        *(pb + 3) = *pa;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%.2f\t", (1 / (float)determinanta) * *(pb + n * i + j));
            printf("\n");
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%d\t", *(pa + n * i + j) * 3);
            printf("\n");
        }
    }
    return 0;
}