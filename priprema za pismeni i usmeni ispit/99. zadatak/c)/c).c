#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main()
{
    char a[MAX + 1];
    int n, counter1 = 0, counter2 = 0;

    printf("Ucitaj recenicu: ");
    gets(a);
    n = strlen(a);

    for (int i = 0; i < n; i++)
    {
        if (isupper(a[i]))
            counter1++;
        else if (islower(a[i]))
            counter2++;
    }

    if (counter1 > counter2)
        printf("Velikih");
    else if (counter1 < counter2)
        printf("Malih");
    else
        printf("Jednako");

    return 0;
}