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
        for (int i = 0; i < n; i += 2)
            printf("%c%c", a[i + 1], a[i]);
    }
    else
    {
        for (int i = 0; i < n - 1; i += 2)
            printf("%c%c", a[i + 1], a[i]);
        printf("%c", a[n - 1]);
    }
    return 0;
}