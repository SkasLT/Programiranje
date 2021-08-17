#include <stdio.h>

int main(void)
{
    int i = 1, s = 0;
    do
    {
        s += i;
        i++;
    } while (i <= 100);

    printf("%d", s);
    return 0;
}