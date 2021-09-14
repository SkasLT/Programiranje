#include <stdio.h>
#include <string.h>
#define MAX 100

void Upisi(int *px, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", px + i);
    }
}

void Ispisi(int *px, int n)
{
    for (int i = 0; i < n; i++)
        printf("x[%d] = %d\n", i, *(px + i));
}

int Prebroji(int *px, int n)
{
    int brojac = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(px + i) > 0)
            brojac++;
    }
    return brojac;
}

int main(void)
{
    int x[100];
    int n;

    printf("Unesi broj elemenata polja: ");
    scanf("%d", &n);
    Upisi(&x[0], n);
    Ispisi(&x[0], n);
    printf("Broj pozitivnih elemenata polja: %d", Prebroji(&x[0], n));
    return 0;
}