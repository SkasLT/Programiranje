#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i % 2 == 1)
            sum -= i;
        else
            sum += i;
    }

    printf("%d", sum);
    return 0;
}