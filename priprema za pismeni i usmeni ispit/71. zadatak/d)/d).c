#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    float sum = 0;

    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i % 2 == 1)
            sum += 1 / pow(i, 2);
        else
            sum -= 1 / pow(i, 2);
    }

    printf("%.3f", sum);
    return 0;
}