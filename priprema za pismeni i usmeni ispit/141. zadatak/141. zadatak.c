#include <stdio.h>

char Rastavi(int *n);

int main(void)
{
    int n = 0;
    while ((n >= -9) && (n <= 9))
    {
        printf("Utipkaj broj: ");
        scanf("%d", &n);
        char c = Rastavi(&n);

        if (!(n >= -9) && (n <= 9))
        {
            printf("%c ", c);
            printf("%d\n", n);
        }
    }
    return 0;
}

char Rastavi(int *n)
{
    if (*n < 0)
    {
        *n = 0 - *n;
        return '-';
    }
    return '+';
}