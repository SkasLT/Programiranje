#include <stdio.h>
#define MAX 100

void Pad(int *px, int n);

void Ispis(int *px, int n)
{
    for (int i = 0; i < n; i++)
        printf("x[%d] = %d\n", i, *(px + i));
}

int main(void)
{
    int x[MAX];
    int n;
    int *px = &x[0];
    printf("Unesi broj elemenata polja: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", px + i);
    }
    printf("Prije:\n");
    Ispis(px, n);

    printf("Poslje:\n");
    Pad(px, n);
    Ispis(px, n);

    return 0;
}

void Pad(int *px, int n)
{
    int umanjitelj = 1;
    for (int i = 0; i < n; i++)
    {
        *(px + i) -= umanjitelj;
        umanjitelj++;
    }
}