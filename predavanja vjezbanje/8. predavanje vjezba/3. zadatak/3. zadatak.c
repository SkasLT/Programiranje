#include <stdio.h>

int f(int);

int main(void)
{
    int a, b;
    a = f(4);
    b = f(0);
    printf("a = %d\n b = %d", a, b);
    return 0;
}

int f(int n)
{
    if (n == 0)
        return 10;
    else
        return f(n - 1) + 10 * n;
}