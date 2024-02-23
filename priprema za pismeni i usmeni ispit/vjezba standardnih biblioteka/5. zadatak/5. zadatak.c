#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < 5; i++)
        printf("%f\n", (float)rand() / RAND_MAX * (10 - 1) + 1); // generiranje 5 nasumicnih decimalnih brojeva u intervalu [10,100];
    return 0;
}