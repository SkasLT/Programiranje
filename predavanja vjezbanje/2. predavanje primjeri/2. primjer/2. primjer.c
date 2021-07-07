
#include <stdio.h>
int main(void)
{
    int x = 2;
    int y = 3;
    int a, b, c, d, e;

    a = x + y;
    b = x - y;
    c = x * y;
    d = x / y;
    e = x % y;
    printf("%d %d %d %d %d", a, b, c, d, e);
    return 0;
}