#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int x[27] = {28, 43, 47, 51, 67, 70, 79, 91, 98, 100, 112, 123, 124, 126, 141, 144, 149, 161, 164, 175, 180, 184, 190, 195, 198, 202, 205};

    for (int i = 1; i <= 3; i++)
        printf("%d. zadatak: %d\n", i, x[rand() % 28]);

    return 0;
}