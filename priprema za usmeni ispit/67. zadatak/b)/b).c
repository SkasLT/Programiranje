#include <stdio.h>

int main()
{
    int n, counter = 0;
    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    while (n > 0)
    {
        n /= 10;
        counter++;
    }
    printf("Broj znamenki unesenog broja: %d", counter);
    return 0;
}