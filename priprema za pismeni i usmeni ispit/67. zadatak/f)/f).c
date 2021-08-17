#include <stdio.h>

int main()
{
    int n, counter = 0;
    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            counter++;
    }

    if (counter == 2)
        printf("Broj je prost");
    else
        printf("Broj nije prost");

    return 0;
}