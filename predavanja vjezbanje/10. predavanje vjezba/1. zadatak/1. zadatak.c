#include <stdio.h>

int main()
{

    int a;
    printf("Unesi broj elemenata polja: ");
    scanf("%d", &a);
    int x[a];
    int *px = &x[0];

    for (int i = 0; i < a; i++)
    {
        printf("\nUnesi %d vrijednost matrice: ", i + 1);
        scanf("%d", px + i);
    }
    for (int i = 0; i < a; i++)
        printf("\nx[%d] = %d", i, *(px + i));
    return 0;
}
