#include <stdio.h>

int main(void)
{
    int x, y, nzd;
    printf("Unesi x i y: ");
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
            nzd = i;
    }

    printf("%d", nzd);
    return 0;
}