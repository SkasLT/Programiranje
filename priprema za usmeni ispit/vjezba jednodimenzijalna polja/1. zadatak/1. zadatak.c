#include <stdio.h>

int main()
{
    int n, u = 1;
    do
    {
        printf("Unesi broj elemenata matrice: ");
        scanf("%d", &n);
        if (n < 1 || n > 10)
            printf("Pogresan unos, ponovite unos!\n");
    } while (n < 1 || n > 10);
    int x[n];

    for (int i = 0; i < n; i++)
    {
        printf("Unesi %d. element polja: ", i + 1);
        scanf("%d", &x[i]);
        u *= x[i];
    }
    for (int i = 0; i < n; i++)
        printf("x[%d] = %d\n", i, x[i]);

    printf("Umnozak: %d", u);
    return 0;
}