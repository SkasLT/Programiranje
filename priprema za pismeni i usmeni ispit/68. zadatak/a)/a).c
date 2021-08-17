#include <stdio.h>

int main(void)
{
    int n;
    printf("Unesi n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("x ");
        printf("\n");
    }
    return 0;
}