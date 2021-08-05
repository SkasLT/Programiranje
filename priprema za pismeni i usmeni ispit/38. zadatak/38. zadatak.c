#include <stdio.h>

int main(void)
{
    int a, b, c, d;

    printf("Unesi brojeve koji svaki zec ima: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a % 2 == 0)
        printf("%d %d %d %d", d, a, b, c);
    else
        printf("%d %d %d %d", b, c, d, a);
    return 0;
}