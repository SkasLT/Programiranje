#include <stdio.h>

int main(void)
{
    int x, jedinice, desetice;
    printf("Unesi broj: ");
    scanf("%d", &x);

    if (x < 1)
    {
        printf("Pogresan unos");
        return 1;
    }

    else
    {
        jedinice = x % 10;
        desetice = x / 10 % 10;

        if (jedinice == 1 && desetice != 1)
            printf("Nominativ jednine");

        else if (jedinice == 2 || jedinice == 3 || jedinice == 4)
        {
            printf("Genitiv ");

            if (desetice != 1)
                printf("jednine");
            else
                printf("mnozine");
        }
        else
            printf("Genitiv mnozine");
    }
    return 0;
}