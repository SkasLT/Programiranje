#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void broji(FILE *pulaz)
{
    FILE *rezultat = fopen("rezultat.txt", "w");
    if (rezultat == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke");
        exit(1);
    }
    char c;
    char x[100];
    while ((c = getc(pulaz)) != EOF)
    {
        int i = 0;
        if (c != '\n')
        {
            x[i] = getc(pulaz);
            i++;
        }
    }
}

int main(void)
{
    FILE *pulaz = fopen("rijeci.txt", "r");
    if (pulaz == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke");
        exit(1);
    }

    broji(pulaz);
    return 0;
}