#include <stdio.h>

int main(void)
{
    int prestupne_godine = 0;
    for (int i = 1995; i <= 2019; i++)
    {
        if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
            prestupne_godine++;
    }
    printf("Prestupnih godina ima: %d", prestupne_godine);
    return 0;
}