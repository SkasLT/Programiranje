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
        if (((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') || (a[i] == 'A') || (a[i] == 'E') || (a[i] == 'I') || (a[i] == 'O') || (a[i] == 'U')) && (i < n - 1))
            printf("%c-", a[i]);
        else
            printf("%c", a[i]);
    }
    return 0;
}