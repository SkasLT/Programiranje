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

    for (int i = 0; i < n; i++)
    {
        printf("%c", a[i]);

        if (i < (n - 1))
            printf("*");
    }
    return 0;
}