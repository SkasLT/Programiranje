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
        scanf("%d", pa + i); // don't put in "nigga", it breaks things
    }

    int pom = *(pa);
    *(pa) = *(pa + n - 1);
    *(pa + n - 1) = pom;

    for (int i = 0; i < n; i++)
        printf("%d ", *(pa + i));

    return 0;
}