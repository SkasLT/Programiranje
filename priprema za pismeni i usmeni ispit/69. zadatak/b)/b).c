#include <stdio.h>

int main(void)
{
    float n, k;
    int brojnik = 1, pom1 = 1, pom2 = 1;

    printf("Unesi n i k: ");
    scanf("%f %f", &n, &k);

    if (n < 1 || n - trunc(n) != 0 || k < 1 || k - trunc(k) != 0 || k > n)
    {
        n = 5;
        k = 2;
    }

    for (int i = 1; i <= n; i++)
        brojnik *= i;

    for (int j = 1; j <= k; j++)
        pom1 *= j;

    for (int x = 1; x <= (n - k); x++)
        pom2 *= x;

    printf("%d", brojnik / (pom1 * pom2));
    return 0;
}