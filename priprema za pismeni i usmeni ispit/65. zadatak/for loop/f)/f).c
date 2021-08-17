#include <stdio.h>

int main(void)
{
    for (int i = 100; i >= -100; i--)
    {
        if (i % 2 != 0)
            printf("%d   ", i);
    }
    return 0;
}