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

    for (int i = 0; i < n; i++)
    {
        if ((*(px + i) == 'A' || *(px + i) == 'E' || *(px + i) == 'I' || *(px + i) == 'O' || *(px + i) == 'U' || *(px + i) == 'a' || *(px + i) == 'e' || *(px + i) == 'i' || *(px + i) == 'o' || *(px + i) == 'u') && (i < n - 1))
            printf("%c-", *(px + i));
        else
            printf("%c", *(px + i));
    }
    return 0;
}