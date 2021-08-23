#include <stdio.h>

int main(void)
{
    int n, min, max;
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
    max = a[0];
    for (int j = 0; j < n; j++)
    {
        if (a[j] > max)
            max = a[j];
        else
            min = a[j];
    }
    printf("Max: %d\nMin: %d", max, min);
    return 0;
}