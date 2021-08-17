#include <stdio.h>

int main(void)
{
    int n, u = 1, i = 1;

    printf("Utipkaj od koliko brojeva se racuna umnozak: ");
    scanf("%d", &n);

    while (i <= n)
    {
        u *= 2 * i - 1;
        i++;
    }

    printf("%d", u);
}