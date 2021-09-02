#include <stdio.h>
#include <string.h>
#define MAX 100

void Pretvori(char *px)
{
    while (*px != '\0')
    {
        if (*px >= 'A' && *px <= 'Z')
            *px += 32;
        px++;
    }
}

int Znak(char *px, int n)
{
    int pom;
    pom = *(px + n - 1);
    return pom;
}

void Sortiraj(char *px)
{
    int pom;
    int n = strlen(px);
    for (int i = 0; i < n - 1; i++)
    {
        if (*(px + i) > *(px + i + 1))
        {
            pom = *(px + i);
            *(px + i) = *(px + i + 1);
            *(px + i + 1) = pom;
        }
    }
}

int main(void)
{
    char x[MAX + 1];
    char *px = &x[0];
    int pozicija, znak;

    printf("Unesi recenicu: ");
    gets(x);

    Pretvori(&x[0]);

    printf("Novonastali niz:\n%s\n", x);
    printf("Unesi poziciju: ");
    scanf("%d", &pozicija);
    znak = Znak(&x[0], pozicija);
    printf("Na poziciji %d novonastalog niza je znak %c s ASCII vrijednosti %d\n", pozicija, znak, znak);
    Sortiraj(&x[0]);

    int i = 0;
    while (*px != '\0')
    {
        printf("x[%d] = %c (%d)\t->\t%p\n", i, *px, *px, px);
        px++;
        i++;
    }
    return 0;
}