#include <stdio.h>

int main(void)
{
    int x, y, nzd;

    printf("Unesi 2 prirodna broja: ");
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
            nzd = i;
    }
    printf("%d : %d", x / nzd, y / nzd);
    return 0;
} //pogledaj zadatak 72 u kojem se trazi najveci zajdnicki djelitelj