#include <stdio.h>

int main(void)
{
    int n, pom;
    do
    {
        printf("Unesi broj elemenata polja: ");
        scanf("%d", &n);
        if (n < 1 || n > 10)
            printf("Pogresan unos, unesite ponovo!");
    } while (n < 1 || n > 10);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Unesi a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    pom = a[0];
    a[0] = a[n - 1];
    a[n - 1] = pom;

    for (int j = 0; j < n; j++)
        printf("a[%d] = %d\n", j, a[j]);

    return 0;
}