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
        scanf("%d", pa + i); // don't put in "nigga", it breaks things
    }

    int min_index = 0, max_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(pa + min_index) > *(pa + i))
            min_index = i;

        if (*(pa + max_index) < *(pa + i))
            max_index = i;
    }

    int pom = *(pa + min_index);
    *(pa + min_index) = *(pa + max_index);
    *(pa + max_index) = pom;

    for (int i = 0; i < n; i++)
    {
        printf((i < n - 1) ? "%d, " : "%d", *(pa + i));
    }

    return 0;
}