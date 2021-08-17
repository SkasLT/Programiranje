#include <stdio.h>

int main(void)
{
    int n;
    printf("Unesi n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("x");
        printf("\n");
    }
    return 0;
}