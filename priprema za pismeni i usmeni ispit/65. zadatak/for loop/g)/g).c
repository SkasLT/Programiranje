#include <stdio.h>

int main(void)
{
    for (int i = 41; i < 245; i++)
    {
        if (i % 7 == 0)
            printf("%d\n", i);
    }
    return 0;
}