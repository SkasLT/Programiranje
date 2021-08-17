#include <stdio.h>

int main(void)
{
    int i = -100;
    do
    {
        if (i % 2 == 0)
            printf("%d\n", i);
        i++;
    } while (i <= 100);
    return 0;
}