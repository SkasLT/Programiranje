#include <stdio.h>

int main(void)
{
    struct pravokutnik_s
    {
        float a;
        float b;
    };

    struct pravokutnik_s p1;
    struct pravokutnik_s p2;

    do
    {
        printf("Unesi duljinu stranice a prvog pravokutnika: ");
        scanf("%f", &p1.a);

        if (p1.a < 0)
            printf("Unesena stranica nesmije biti manja od nule! Ponovite unos!\n");

    } while (p1.a < 0);

    do
    {
        printf("Unesi duljinu stranice b prvog pravokutnika: ");
        scanf("%f", &p1.b);

        if (p1.b < 0)
            printf("Unesena stranica nesmije biti manja od nule! Ponovite unos!\n");

    } while (p1.b < 0);

    do
    {
        printf("Unesi duljinu stranice a drugog pravokutnika: ");
        scanf("%f", &p2.a);

        if (p2.a < 0)
            printf("Unesena stranica nesmije biti manja od nule! Ponovite unos!\n");

    } while (p2.a < 0);

    do
    {
        printf("Unesi duljinu stranice b drugog pravokutnika: ");
        scanf("%f", &p2.b);

        if (p2.b < 0)
            printf("Unesena stranica nesmije biti manja od nule! Ponovite unos!\n");

    } while (p2.b < 0);

    if ((2 * (p1.a + p1.b)) < (2 * (p2.a * p2.b)))
        printf("Povrsina manjeg pravokutnika sa stranicama %.2f i %.2f je %.2f", p1.a, p1.b, p1.a * p1.b);
    else
        printf("Povrsina manjeg pravokutnika sa stranicama %.2f i %.2f je %.2f", p2.a, p2.b, p2.a * p2.b);

    return 0;
}