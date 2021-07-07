#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int broj;
    int randomBroj;

    srand((unsigned)time(NULL));

    randomBroj = rand() % (100 - 1 + 1) + 1;

    do
    {
        printf("Unesi prirodan broj: ");
        scanf("%d", &broj);
        if (broj > randomBroj)
            printf("%d je veci od zamisljenog broja, pokusaj ponovo!\n", broj);
        else if (broj < randomBroj)
            printf("%d je manji od zamisljenog broja, pokusaj ponovo!\n", broj);
        else if (broj == randomBroj)
            printf("Pogodili ste broj u %d. pokusaju", i);
        i++;

    } while (broj != randomBroj);
    return 0;
}