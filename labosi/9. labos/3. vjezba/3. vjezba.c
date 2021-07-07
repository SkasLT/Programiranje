#include <stdio.h>

int Fibonacci(int x)
{
    if (x == 1 || x == 2)
        return 1;
    else
        return Fibonacci(x - 1) + Fibonacci(x - 2);
}

int main()
{
    int n;
    printf("Unesi redni broj broja iz Fibonaccijevog niza: ");
    scanf("%d", &n);
    printf("%d", Fibonacci(n));

    return 0;
}