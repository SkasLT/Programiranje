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

    for (int i = n; i >= 0; i--)
        printf("%c", a[i]);
    return 0;
}