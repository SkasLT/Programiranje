#include <stdio.h>

int main(void)
{
    int n, s = 0;
    printf("Utipkaj od koliko brojeva se racuna suma: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
        s += 2 * i;

    printf("%d", s);
}