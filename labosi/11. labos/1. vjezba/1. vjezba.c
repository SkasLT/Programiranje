#include <stdio.h>
#define MAX 10

int main()
{
    int n, i;
    float umnozak = 1;
    int a[MAX];
    int *pa = &a[0];

    do
    {
        printf("Unesi broj elemanata polja: ");
        scanf("%d", &n);
        if (n < 1 || n > 10)
            printf("Pogresan unos. Ponovite unos.\n");
    } while (n < 1 || n > 10);

    printf("Unesi vrijednosti elemenata polja:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", pa + i);
        umnozak *= *(pa + i);
    }
    for (i = 0; i < n; i++)
        printf("a[%d]=%d\n", i, *(pa + i));

    printf("Umnozak: %f", umnozak);
    return 0;
}