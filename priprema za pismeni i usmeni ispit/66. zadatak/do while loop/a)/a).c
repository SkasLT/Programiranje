#include <stdio.h>

int main(void)
{
    int i = 1, s = 0;
    while (i <= 100)
    {
        s += i;
        i++;
    }
    printf("%d", s);
    return 0;
}