#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x[11] = {0}; //array lista u koju se spremaju frekvencije ponavljanja brojeva

    srand((unsigned)time(NULL));

    for (int i = 0; i < 1000000; i++)
    {
        int br = rand() % (30 - 20 + 1) + 20;
        x[br - 20]++;
    }
    for (int i = 20; i <= 30; i++)
        printf("Broj %d se pojavio %d puta\n", i, x[i - 20]);

    return 0;
}