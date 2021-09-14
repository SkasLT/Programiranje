#include <stdio.h>

int main(void)
{
    int n, counter = 0;
    printf("Unesi prirodni cijeli broj: ");
    scanf("%d", &n);

    while (n > 0)
    {
        counter++;
        n /= 10;
    }
    printf("%d", counter);
    return 0;
}