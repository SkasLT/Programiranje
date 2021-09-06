#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main()
{
    char x[MAX + 1];
    char *px = &x[0];
    int n;

    printf("Ucitaj recenicu: ");
    gets(x);
    n = strlen(x);

    for (int i = 0; i < n; i++)
    {
        if (isdigit(*(px + i)))
        {
            switch (*(px + i))
            {
            case '0':
                printf("nula");
                break;
            case '1':
                printf("jedan");
                break;
            case '2':
                printf("dva");
                break;
            case '3':
                printf("tri");
                break;
            case '4':
                printf("cetiri");
                break;
            case '5':
                printf("pet");
                break;
            case '6':
                printf("sest");
                break;
            case '7':
                printf("sedam");
                break;
            case '8':
                printf("osam");
                break;
            case '9':
                printf("devet");
                break;
            }
        }
        else
            printf("%c", *(px + i));
    }
    return 0;
}