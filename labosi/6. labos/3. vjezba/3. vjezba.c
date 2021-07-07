#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    float s = 0;

    printf("Unesi broj: ");
    scanf(" %d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            s = s - 1 / pow(i, 2);
        else
            s = s + 1 / pow(i, 2);
    }
    printf("Suma je: %.3f", s);
    return 0;
}