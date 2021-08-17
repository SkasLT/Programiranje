#include <stdio.h>

int main(void)
{
    int i = 100;
    do
    {
        printf("%d ", i);
        i--;
    } while (i >= 1);
    return 0;
}