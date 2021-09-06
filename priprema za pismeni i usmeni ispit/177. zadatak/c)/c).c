#include <stdio.h>
#define MAX 100
int main(void)
{
    int n;
    int a[MAX][MAX];
    int *pa = &a[0][0];

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
    int provjera = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j && *(pa + n * i + j) != 0) //za gornjetrokutastu ovdje je i>j, za donjetrokutastu tu je i<j, elementi koji zadovoljavaju uvjet moraju biti 0;
            {
                provjera = 1;
                break;
            }
        }
    }
    if (provjera)
        printf("Ne");
    else
        printf("Da");
    return 0;
}