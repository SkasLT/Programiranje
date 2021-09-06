#include <stdio.h>
#define MAX 100
int main(void)
{
    int n;
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            *(pb + n * i + j) = *(pa + n * j + i);
    }
    printf("Transponirana matrica a:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", *(pb + n * i + j));
        printf("\n");
    }
    return 0;
}