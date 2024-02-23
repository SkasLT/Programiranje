#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main(void)
{
    char prvoPolje[MAX + 1];
    char drugoPolje[MAX + 1];
    char trecePolje[MAX + 1];
    int n1, n2, n3;

    printf("Unesi recenicu u prvo polje: ");
    gets(prvoPolje);
    n1 = strlen(prvoPolje);

    printf("Unesi recenicu u drugo polje: ");
    gets(drugoPolje);
    n2 = strlen(drugoPolje);

    printf("Unesi recenicu u trece polje: ");
    gets(trecePolje);
    n3 = strlen(trecePolje);

    for (int i = 0; i < n1 + 1; i++)
        printf("%c", prvoPolje[i]);
    printf("\n");

    for (int i = 0; i < n2 + 1; i++)
        printf("%c", drugoPolje[i]);
    printf("\n");

    for (int i = 0; i < n3 + 1; i++)
        printf("%c", trecePolje[i]);
    printf("\n");

    strcat(prvoPolje, drugoPolje);

    for (int i = 0; i < n1 + n2 + 1; i++)
        printf("%c", prvoPolje[i]);
    printf("\n");

    return 0;
}