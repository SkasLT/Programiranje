//napisi program koji baca 2 novcica i broji koliko je pisma koliko glava
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int glava = 0, pismo = 0;
    int prviNovac, drugiNovac;
    srand((unsigned)time(NULL));
    prviNovac = rand() % 2;
    drugiNovac = rand() % 2;
    printf("Prvi novac: %d, drugi novac: %d\n", prviNovac, drugiNovac);
    if (prviNovac == 1)
        pismo++;
    else
        glava++;
    if (drugiNovac == 1)
        pismo++;
    else
        glava++;
    printf("Palo je %d pisama, %d glava", pismo, glava);
    return 0;
}
