#include <stdio.h>

int main()
{
    int i, j;
    double sum1 = 0, sum2 = 0, pom;
    for (i = 1; i <= 50; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 3)
                continue;
            pom = (double)(j + 2.0f) / (double)(j - 3.0f);
            sum1 += pom;
        }
    }
    printf("%.3f", sum1);
    return 0;
}