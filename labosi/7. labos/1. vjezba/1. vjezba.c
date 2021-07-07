#include <stdio.h>
#define MAX 10

int main()
{
    int a[MAX], n, umnozak = 1, max, min, minindex, maxindex, pom;

    do
    {
        printf("Unesi broj brojeva: ");
        scanf(" %d", &n);
        if ((n > MAX) || (n < 1))
            printf("Krivi unos, ponovi unos brojeva!\n");

    } while ((n > MAX) || (n < 1));

    for (int i = 0; i < n; i++)
    {
        printf("Unesi %d broj: ", i + 1);
        scanf(" %d", &a[i]);
        umnozak *= a[i];
    }
    for (int i = 0; i < n; i++)
        printf("a[%d] = %d\n", i, a[i]);

    printf("Umnozak je: %d\n", umnozak);

    min = a[0];
    max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("min: %d\nmax: %d\n", min, max);
    for (int i = 0; i < n; i++)
    {
        if (min == a[i])
            minindex = i;
        if (max == a[i])
            maxindex = i;
    }
    pom = a[minindex];
    a[minindex] = a[maxindex];
    a[maxindex] = pom;
    printf("Nova tablica:\n");

    for (int i = 0; i < n; i++)
        printf("a[%d] = %d\n", i, a[i]);
    return 0;
}