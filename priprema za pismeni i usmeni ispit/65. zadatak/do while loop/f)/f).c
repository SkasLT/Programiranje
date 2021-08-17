#include <stdio.h>

int main(void)
{
    int i = 100;
    do
    {
        if (i % 2 == 1)
            printf("%d   ", i);
        i--;
    } while (i >= -100);
    return 0;
}