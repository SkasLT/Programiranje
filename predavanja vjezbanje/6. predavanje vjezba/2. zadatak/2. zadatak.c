//Kako će izgledati ispis na zaslonu računala?
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int main(void)
{
    char a[MAX + 1] = "KaKtus!?123";
    int n;
    int br1 = 0, br2 = 0, br3 = 0;

    n = strlen(a);

    for (int i = 0; i < n; i++)
    {
        if (islower(a[i]))
            a[i] = toupper(a[i]);
        else
            a[i] = tolower(a[i]);
    }

    printf("%s", a);

    return 0;
}