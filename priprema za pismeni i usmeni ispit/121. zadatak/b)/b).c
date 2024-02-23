#include <stdio.h>

char pretvoriMalo(char c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return c;
}

int main(void)
{
    for (int i = 67; i <= 84; i++)
        printf("%c  ", pretvoriMalo(i));
    return 0;
}