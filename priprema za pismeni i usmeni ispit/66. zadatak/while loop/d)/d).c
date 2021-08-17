#include <stdio.h>

int main(void)
{
    int n, s = 0, i = 0;

    printf("Utipkaj od koliko brojeva se racuna suma: ");
    scanf("%d", &n);

    while (i <= n)
    {
        s += 2 * i;
        i++;
    }

    printf("%d", s);
}