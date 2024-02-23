#include <stdio.h>

int main(void)
{
    int n, min = 0, max = 0;

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

    for (int j = 0; j < n; j++)
    {
        if (a[j] > max)
            max = a[j];
        if (a[j] < min)
            min = a[j];
    }

    for (int k = 0; k < n; k++)
    {
        if (a[k] == min)
            a[k] = max;
        else if (a[k] == max)
            a[k] = min;
    }

    for (int l = 0; l < n; l++)
        printf("a[%d] = %d\n", l, a[l]);

    return 0;
}