#include <stdio.h>

int main(void)
{
    int n;
    float sum = 0, j = 5;

    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i % 2 == 1)
            sum -= 1 / j;
        else
            sum += 1 / j;
        j += 5;
    }

    printf("%.3f", sum);
    return 0;
}