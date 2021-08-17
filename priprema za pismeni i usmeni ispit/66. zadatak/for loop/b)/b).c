#include <stdio.h>

int main(void)
{
    int u = 1;
    for (int i = 1; i <= 6; i++)
        u *= i;
    printf("%d", u);
    return 0;
}