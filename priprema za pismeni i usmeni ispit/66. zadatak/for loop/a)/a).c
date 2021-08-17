#include <stdio.h>

int main(void)
{
    int s = 0;
    for (int i = 1; i <= 100; i++)
        s += i;
    printf("%d", s);
    return 0;
}