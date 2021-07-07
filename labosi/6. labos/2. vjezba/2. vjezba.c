#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("upisi broj: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j + i == n - 1)
                printf("z ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}