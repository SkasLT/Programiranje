#include <stdio.h>

int main(void)
{
    int n;
    float sum;
    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (float i = 1; i <= n; i++)
        sum += 1 / i;
    printf("%.3f", sum);
    return 0;
}