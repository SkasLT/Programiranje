#include <stdio.h>

int main(void)
{
    int n, umnozak = 1;
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
        umnozak *= a[i];
    }
    for (int j = 0; j < n; j++)
        printf("a[%d] = %d\n", j, a[j]);
    printf("%d", umnozak);
    return 0;
}