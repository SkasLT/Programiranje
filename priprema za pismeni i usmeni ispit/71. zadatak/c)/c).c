#include <stdio.h>

int main(void)
{
    int n;
    float sum = 0;

    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += (2 * i - 1) / (float)(2 * i);

    printf("%.3f", sum);
    return 0;
}