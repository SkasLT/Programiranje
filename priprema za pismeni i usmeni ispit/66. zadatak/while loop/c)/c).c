#include <stdio.h>

int main(void)
{
    int s = 0, i = 10;

    while (i <= 210)
    {
        s += i;
        i++;
    }

    printf("%.4f", s / (float)200);
    return 0;
}