#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void)
{
    char x[MAX];
    char *px = &x[0];
    int n;

    printf("Unesi niz znakova: ");
    gets(x);
    n = strlen(x);

    for (int i = 0; i < n; i += 2)
        printf("%c", *(px + i));
    return 0;
}