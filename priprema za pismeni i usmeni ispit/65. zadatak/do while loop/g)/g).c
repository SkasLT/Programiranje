#include <stdio.h>

int main(void)
{
    int i = 41;
    do
    {
        if (i % 7 == 0)
            printf("%d\n", i);
        i++;
    } while (i < 245);
    return 0;
}