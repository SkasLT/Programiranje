#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

#define GET_VARIABLE_NAME(Variable) (#Variable)

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

    for (int i = 0; i < n; i++)
    {
        if (*(pa + i) < 0)
            *(pa + i) = 0;
        else if (*(pa + i) < 10)
            *(pa + i) *= 10;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", *(pa + i));

    return 0;
}