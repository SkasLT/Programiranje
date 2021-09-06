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
        for (int i = 0; i < n; i += 2)
            printf("%c%c", *(px + i + 1), *(px));
    }
    else
    {
        for (int i = 0; i < n - 1; i += 2)
            printf("%c%c", *(px + i + 1), *(px + i));
        printf("%c", *(px + n - 1));
    }
    return 0;
}