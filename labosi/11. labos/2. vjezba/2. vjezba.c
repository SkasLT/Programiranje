
#include <stdio.h>

void Upisi(int *pa, int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("Upisi vrijednost %d clana: \n", i + 1);
        scanf("%d", pa + i);
    }
}

void Ispisi(int *pa, int x)
{
    int i;
    for (i = 0; i < x; i++)
        printf("%d ", *(pa + i));
}
int Prebroji(int *pa, int x)
{
    int i, y = 0;
    for (i = 0; i < x; i++)
    {
        if (*(pa + i) > 0)
            y += 1;
    }
    return y;
}
int main()
{
    int n, br = 0;
    int a[100];
    int *pa = &a[0];

    printf("Unesi broj elemenata: ");
    scanf("%d", &n);
    Upisi(&pa, n);
    Ispisi(&pa, n);
    br = Prebroji(&pa, n);
    printf("\nBroj pozitivnih: %d\n", br);
    return 0;
}