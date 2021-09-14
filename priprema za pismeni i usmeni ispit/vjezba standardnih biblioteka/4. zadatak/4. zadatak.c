#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    for (int i = 0; i < 5; i++)
        printf("%d\n", rand() * (100 - 10 + 1) + 10); //generiranje 5 nasumicnih brojeva u intervalu [10,100]
    return 0;
}