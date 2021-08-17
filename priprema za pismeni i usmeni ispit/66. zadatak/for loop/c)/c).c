#include <stdio.h>

int main(void)
{
    int s = 0;

    for (int i = 10; i <= 210; i++)
        s += i;
    printf("%.4f", s / (float)200);
    return 0;
}