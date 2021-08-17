#include <stdio.h>

int main(void)
{
    int n, u = 1, i = 1;

    printf("Utipkaj od koliko brojeva se racuna umnozak: ");
    scanf("%d", &n);

    do
    {
        u *= 2 * i - 1;
        i++;
    } while (i <= n);

    printf("%d", u);
}