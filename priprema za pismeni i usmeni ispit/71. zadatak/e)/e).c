#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, j = 0;
    float sum = 0;

    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum += (3 + j) / (float)(5 + j);
        j += 4;
    }

    printf("%.3f", sum);
    return 0;
}