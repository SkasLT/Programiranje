#include <stdio.h>

int main()
{
    int n, pom, rez = 0, i = 1;
    printf("Unesi binarni prirodni broj n: ");
    scanf("%d", &n);
    printf("%d(10) = ", n);

    while (n > 0)
    {
        pom = n % 2;
        rez = rez + (pom * i);
        i *= 10;
        n /= 2;
    }
    printf("%d(2)", rez);
    return 0;
}