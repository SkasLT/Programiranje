//nemam blage veze kak ide selection sort ja sam napravio sa bubble sort(naj ez sortiranje)
#include <stdio.h>

void BubbleUp(int *px, int n)
{
    int pom;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(px + j) > *(px + j + 1)) //kod uzlaznog sortiranja tu je ">"
            {
                pom = *(px + j);
                *(px + j) = *(px + j + 1);
                *(px + j + 1) = pom;
            }
        }
    }
}

void BubbleDown(int *px, int n)
{
    int pom;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(px + j) < *(px + j + 1)) //kod silaznog sortiranja tu je "<"
            {
                pom = *(px + j);
                *(px + j) = *(px + j + 1);
                *(px + j + 1) = pom;
            }
        }
    }
}

void Ispis(int *px, int n)
{
    for (int i = 0; i < n; i++)
        printf("x[%d] = %d\n", i, *(px + i));
    printf("--------------------\n");
}

int main(void)
{
    int a[] = {4, 6, 2, -1, 5};
    int b[] = {0, 4, 5, 8, 9, 10, 7, 4};

    int *pa = &a[0];
    int *pb = &b[0];

    BubbleUp(pa, 5);
    Ispis(pa, 5);
    BubbleDown(pb, 8);
    Ispis(pb, 8);
    return 0;
}