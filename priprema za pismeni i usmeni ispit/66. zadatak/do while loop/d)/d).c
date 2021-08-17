#include <stdio.h>

int main(void)
{
    int n, s = 0, i = 0;

    printf("Utipkaj od koliko brojeva se racuna suma: ");
    scanf("%d", &n);

    do
    {
        s += 2 * i;
        i++;
    } while (i <= n);

    printf("%d", s);
}