#include <stdio.h>

int main(void)
{
    int n;
    printf("Unesi n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j * 2);

        printf("\n");
    }
    return 0;
}