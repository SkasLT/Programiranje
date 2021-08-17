#include <stdio.h>

int main(void)
{
    int n;
    printf("Unesi n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i + j) == (n + 1)) || i == 1 || i == n)
                printf("Z ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}