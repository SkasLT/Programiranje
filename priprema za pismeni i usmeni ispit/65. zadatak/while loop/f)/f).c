#include <stdio.h>

int main(void)
{
    int i = 100;
    while (i >= -100)
    {
        if (i % 2 == 1)
            printf("%d   ", i);
        i--;
    }
    return 0;
}