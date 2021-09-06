#include <stdio.h>
#define MAX 100

int main(void)
{
    char x[MAX];
    char *px = &x[0];

    printf("Unesi niz znakova: ");
    gets(x);

    while (*px != '\0')
    {
        printf("%c\n", *px);
        px++;
    }
    return 0;
}