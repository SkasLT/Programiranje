#include <stdio.h>

int main(void)
{
    int n, sum = 0, j = 3;

    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum -= j;
        j += 3;
    }

    printf("%d", sum);
    return 0;
}