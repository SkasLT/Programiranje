#include <stdio.h>

int main(void)
{
    for (int i = -100; i <= 100; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }
    return 0;
}