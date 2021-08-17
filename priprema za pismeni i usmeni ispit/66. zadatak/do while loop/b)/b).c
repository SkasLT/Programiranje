#include <stdio.h>

int main(void)
{
    int u = 1, i = 1;

    do
    {
        u *= i;
        i++;
    } while (i <= 6);

    printf("%d", u);
    return 0;
}