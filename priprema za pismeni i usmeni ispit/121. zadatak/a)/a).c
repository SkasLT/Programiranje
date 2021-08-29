#include <stdio.h>

char PretvoriVeliko(char c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return c;
}

int main(void)
{
    for (int i = 98; i <= 109; i++)
        printf("%c  ", PretvoriVeliko(i));
    return 0;
}