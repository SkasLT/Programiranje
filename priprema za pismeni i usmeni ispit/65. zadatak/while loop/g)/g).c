#include <stdio.h>

int main(void)
{
    int i = 41;
    while (i < 245)
    {
        if (i % 7 == 0)
            printf("%d\n", i);
        i++;
    }
    return 0;
}