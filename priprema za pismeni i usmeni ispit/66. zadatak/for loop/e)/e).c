#include <stdio.h>

int main(void)
{
    int n, u = 1;
    printf("Utipkaj od koliko brojeva se racuna umnozak: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        u *= 2 * i - 1;

    printf("%d", u);
}