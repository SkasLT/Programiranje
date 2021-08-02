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
        if (isupper(a[i]) > 0)
            printf("%c", tolower(a[i]));

        else if (islower(a[i]) > 0)
            printf("%c", toupper(a[i]));
    return 0;
}