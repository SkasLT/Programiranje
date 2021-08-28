#include <stdio.h>
#define MAX 100

int main(void)
{
    int n, skalarni_umnozak = 0;

    printf("Unesi broj elemenata polja: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX)
    {
        printf("Utipkali ste pogresan n te je n postavljen na vrijednost 3.\n");
        n = 3;
    }
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d. komponenta 1. vektora: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d. komponenta 2. vektora: ", i + 1);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        skalarni_umnozak += a[i] * b[i];
    }

    printf("Vrijednost skalarnog umnoska: %d", skalarni_umnozak);

    return 0;
}