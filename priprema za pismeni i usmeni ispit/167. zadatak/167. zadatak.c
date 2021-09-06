#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int JestSigurna(char *px)
{
    int slovo = 0, znamenka = 0, znak = 0;

    while (*px != '\0')
    {
        if (isalpha(*px))
            slovo = 1;

        if (isdigit(*px))
            znamenka = 1;

        if (isprint(*px) && !isalpha(*px) && !isdigit(*px))
            znak = 1;

        px++;
    }
    if (slovo && znamenka && znak)
        return 1;
    else
        return 0;
}

int main(void)
{
    char x[MAX];

    printf("Unesi lozinku: ");
    gets(x);

    if (JestSigurna(&x[0]))
        printf("Da");
    else
        printf("Ne");

    return 0;
}