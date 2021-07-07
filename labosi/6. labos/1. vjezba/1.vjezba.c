#include <stdio.h>
int main(void)
{
    int n, s, i;
    printf("\nUnesite broj: ");
    scanf("\n%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    if (s == n)
    {
        printf("\n%d je savrsen broj.", n);
    }
    else
    {
        printf("\n%d nije savrsen broj.", n);
    }
    return 0;
}