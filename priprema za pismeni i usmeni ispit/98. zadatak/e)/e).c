#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main()
{
    char a[MAX + 1];
    int n;

    printf("Ucitaj recenicu: ");
    gets(a);
    n = strlen(a);

    if (n % 2 == 0)
    {
        for (int i = (n / 2); i < n; i++)
            printf("%c", a[i]);
        for (int i = 0; i < (n / 2); i++)
            printf("%c", a[i]);
    }
    else
    {
        for (int i = (n + 1) / 2; i < n; i++)
            printf("%c", a[i]);

        printf("%c", a[(n - 1) / 2]);

        for (int i = 0; i < (n - 1) / 2; i++)
            printf("%c", a[i]);
    }
    return 0;
}