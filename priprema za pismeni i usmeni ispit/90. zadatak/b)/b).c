#include <stdio.h>

int main(void)
{
    int n, sum = 0;
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
        sum += a[i];
    }
    for (int j = n - 1; j >= 0; j--)
        printf("%d   ", a[j]);

    printf("\nSuma: %d", sum);
    return 0;
}