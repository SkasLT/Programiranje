#include <stdio.h>

int main(void)
{
    int u = 1, i = 1;

    while (i <= 6)
    {
        u *= i;
        i++;
    }

    printf("%d", u);
    return 0;
}