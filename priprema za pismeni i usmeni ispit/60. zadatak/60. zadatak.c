#include <stdio.h>

int main(void)
{
    char PG1, PG2, PG3;
    int pismo = 0, glava = 0;
    printf("Unesi rezultat od 1. bacanja novcica: ");
    scanf(" %c", &PG1);

    if (PG1 == 'P')
        pismo++;
    else if (PG1 == 'G')
        glava++;
    else
    {
        printf("Pogresan unos");
        return 1;
    }

    printf("Unesi rezultat od 2. bacanja novcica: ");
    scanf(" %c", &PG2);

    if (PG2 == 'P')
        pismo++;
    else if (PG2 == 'G')
        glava++;
    else
    {
        printf("Pogresan unos");
        return 1;
    }

    printf("Unesi rezultat od 3. bacanja novcica: ");
    scanf(" %c", &PG3);

    if (PG3 == 'P')
        pismo++;
    else if (PG3 == 'G')
        glava++;
    else
    {
        printf("Pogresan unos");
        return 1;
    }

    printf("%c %c %c\nGlava se pojavila %d puta\nPismo se pojavilo %d puta", PG1, PG2, PG3, glava, pismo);
}