#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    FILE *pULAZ = fopen("poruka.txt", "r");
    if (pULAZ == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke poruka.txt");
        exit(1);
    }

    FILE *pIZLAZ = fopen("bez_razmaka.txt", "w");
    if (pIZLAZ == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke bez_razmaka.txt");
        exit(1);
    }

    char c;
    while (!feof(pULAZ))
    {
        fscanf(pULAZ, "%c", &c);
        if (c != ' ')
            fprintf(pIZLAZ, "%c", c);
    }
    fclose(pULAZ);
    fclose(pIZLAZ);
}