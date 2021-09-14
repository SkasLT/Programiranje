#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main()
{
    char a[MAX + 1];
    int n, pom, uvjet = 0;

    printf("Ucitaj recenicu: ");
    gets(a);
    n = strlen(a);
    pom = n;

    for (int i = 0; i <= n / 2; i++)
    {
        if (toupper(a[i]) != toupper(a[pom - 1])) //stavio sam da se svaki character pretvori u veliko slovo jer se moze unesti npr "Ana" gdje se veliko "A" i malo "a" smatraju kao ista slova
        {
            uvjet = 0;
            break;
        }
        else
            uvjet = 1;
        pom--;
    }

    if (uvjet)
        printf("Je");
    else
        printf("Nije");

    return 0;
}