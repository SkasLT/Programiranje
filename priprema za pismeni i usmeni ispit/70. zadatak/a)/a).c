#include <stdio.h>

int main()
{
    int n;
    float sum = 0, pom;

    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 3)
            i = 4;
        pom = (i + 3.5) / (i - 3);
        sum += pom;
    }
    printf("%.3f", sum);
    return 0;
}