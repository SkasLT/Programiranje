#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("%d je savrsen broj", n);
    else
        printf("%d nije savrsen broj", n);

    return 0;
}