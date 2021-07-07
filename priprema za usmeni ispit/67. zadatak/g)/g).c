#include <stdio.h>

int main()
{
    int n, pom, sum = 0;
    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        pom = n % i;
        if (pom == 0)
            sum += i;
    }

    if (sum == n)
        printf("%d je savrsen broj", n);
    else
        printf("%d nije savrsen broj", n);

    return 0;
}