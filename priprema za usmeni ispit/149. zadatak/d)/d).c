#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

int main(void)
{
    int pom;
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

    /*     for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(pa + j) > *(pa + j + 1))
            {
                pom = *(pa + j);
                *(pa + j) = *(pa + j + 1);
                *(pa + j + 1) = pom;
            }
        }
    } */

    int min = *(pa), max = *(pa);

    // 1, 2, 3, 4, 5

    for (int i = 0; i < n; i++)
    {

        /*         min = (min > *(pa + i)) * (*(pa + i)) + !(min > *(pa + i)) * min;
        max = (max < *(pa + i)) * (*(pa + i)) + !(max < *(pa + i)) * max;
     */

        if (min > *(pa + i))
            min = *(pa + i);

        if (max < *(pa + i))
            max = *(pa + i);
    }

    printf("min: %d\nmax: %d", min, max);

    return 0;
}