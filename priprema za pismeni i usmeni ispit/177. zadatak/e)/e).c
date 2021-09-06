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
    int uvjet = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(pa + n * i + j) != -(*(pa + n * j + i))) //matrica je antisimetricna ako je zadovoljeno da je svaki a(ij) = -a(ji)
            {
                uvjet = 1;
                break;
            }
        }
    }
    if (uvjet)
        printf("Ne");
    else
        printf("Da");
    return 0;
}