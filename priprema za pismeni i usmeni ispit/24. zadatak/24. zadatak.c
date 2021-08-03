#include <stdio.h>

int main(void)
{
    char c, d;
    printf("Unesi 2 slova: ");
    scanf("%c %c", &c, &d);
    printf("Ista slova: %d", (c == d) || ((c - 32) == d) || ((c + 32) == d));
    return 0;
}