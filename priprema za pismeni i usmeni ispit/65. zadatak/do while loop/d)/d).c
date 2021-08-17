#include <stdio.h>

int main(void)
{
    char c = 'z';
    do
    {
        printf("%c  ", c);
        c--;
    } while (c >= 'a');
    return 0;
}