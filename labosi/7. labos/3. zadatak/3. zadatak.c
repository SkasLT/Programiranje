#include <stdio.h>

int main()
{
    int n, ostatak;
    printf("Unesi broj koji predstavlja ocjene: ");
    scanf("%d", n);
    if (n < 1)
        printf("Pogresan unos, kraj programa");

    {
        while (n > 0)
        {
            int ostatak = n % 10;
            printf("%d\n", ostatak);
            n = n / 10;
            if(ostatak / 5)
        }
    }
    return 0;
} //0 bodova nice
