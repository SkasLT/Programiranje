#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main()
{
    char x[MAX + 1];
    char *px = &x[0];
    int n;

    printf("Ucitaj recenicu: ");
    gets(x);
    n = strlen(x);

    if (n % 2 == 0)
    {
        for (int i = (n / 2); i < n; i++)
            printf("%c", *(px + i));
        for (int i = 0; i < (n / 2); i++)
            printf("%c", *(px + i));
    }
    else
    {
        for (int i = (n + 1) / 2; i < n; i++)
            printf("%c", *(px + i));
        printf("%c", *(px + (n - 1) / 2));

        for (int i = 0; i < (n - 1) / 2; i++)
            printf("%c", *(px + i));
    }
    return 0;
}