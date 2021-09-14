#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float Decimalna(float x)
{
    return x - trunc(x);
}

int main(void)
{
    int brojac = 0;
    float x[50] = {0};

    srand((unsigned)time(NULL));

    for (int i = 0; i < 50; i++)
    {
        x[i] = (float)rand() / RAND_MAX * (46 - 7) + 7;

        if (Decimalna(x[i]) > 0.5)
            brojac++;
    }
    printf("%d", brojac);
    return 0;
}