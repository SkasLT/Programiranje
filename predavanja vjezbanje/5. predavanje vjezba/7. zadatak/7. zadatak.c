//Što će se ispisati na zaslonu računala?
#include <stdio.h>
int main(void)
{
    int x = 5, y = 20;
    while (y > 1)
    {
        y--;
        if (y % x != 0)
            continue;
        printf("%d\n", y);
    }
    return 0;
}