#include <stdio.h>

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

    for (int i = 0; i < n; i++)
        printf("\na[%d] = %d", i, *(pa + i));
    return 0;
}