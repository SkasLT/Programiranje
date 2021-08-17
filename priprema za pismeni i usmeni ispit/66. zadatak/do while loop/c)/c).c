#include <stdio.h>

int main(void)
{
    int s = 0, i = 10;

    do
    {
        s += i;
        i++;
    } while (i <= 210);

    printf("%.4f", s / (float)200);
    return 0;
}