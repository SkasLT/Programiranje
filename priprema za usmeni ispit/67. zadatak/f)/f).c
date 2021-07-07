#include <stdio.h>

int main()
{
    int n, pom1, pom2 = 0;
    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        pom1 = n % i;
        if (pom1 == 0)
            pom2++;
    }
    if (pom2 == 2)
        printf("Broj je prost");
    else
        printf("Broj nije prost");

    return 0;
}