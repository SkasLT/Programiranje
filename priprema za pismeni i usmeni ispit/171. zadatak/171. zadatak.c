#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

//nije bilo zadano da se zadatak rijesi sa funckijom ali pointeri tako imaju vise smisla

void stvarnaSlova(char *px, int *pbrojac)
{
    while (*px != '\0')
    {
        if ((*px == 'C' && *(px + 1) == '-') || (*px == 'C' && *(px + 1) == '=') || (*px == 'S' && *(px + 1) == '=') || (*px == 'Z' && *(px + 1) == '=') || (*px == 'D' && *(px + 1) == '-') || (*px == 'L' && *(px + 1) == 'J') || (*px == 'N' && *(px + 1) == 'J'))
            px += 2;

        else if ((*px == 'D' && *(px + 1) == 'Z' && *(px + 2) == '='))
            px += 3;

        else
            px++;
        (*pbrojac)++;
    }
}

int main(void)
{
    int brojac = 0;
    char x[MAX];
    printf("Unesi rijec: ");
    gets(x);
    stvarnaSlova(&x[0], &brojac);
    printf("%d", brojac);
    return 0;
}