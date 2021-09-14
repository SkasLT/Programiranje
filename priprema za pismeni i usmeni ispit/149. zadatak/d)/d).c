#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

int main(void)
{
    int n;
    do
    {
        printf("Unesi broj elementa polja: ");
        scanf("%d", &n);
        if (n < 1 && n > 10)
            printf("Pogresan unos, unesite ponovo!\n");
    } while (n < 1 && n > 10);

    int a[n];
    int *pa = &a[0];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", pa + i);
    }

    int min = *(pa), max = *(pa);

    for (int i = 0; i < n; i++)
    {
        if (min > *(pa + i))
            min = *(pa + i);

        if (max < *(pa + i))
            max = *(pa + i);
    }

    printf("min: %d\nmax: %d", min, max);

    return 0;
}