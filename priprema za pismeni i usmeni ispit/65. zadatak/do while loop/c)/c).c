#include <stdio.h>

int main(void)
{
    char c = 'A';
    do
    {
        printf("%c\n", c);
        c++;
    } while (c <= 'Z');
    return 0;
}