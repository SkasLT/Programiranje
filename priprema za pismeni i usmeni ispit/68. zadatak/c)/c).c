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
            if ((i > 1 && i < n) && (j > 1 && j < n))
                printf("* ");
            else
                printf("o ");
        }
        printf("\n");
    }
    return 0;
}