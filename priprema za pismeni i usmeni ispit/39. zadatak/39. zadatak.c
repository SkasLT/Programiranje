#include <stdio.h>

int main(void)
{
    int bodovi;

    printf("Unesi broj bodova ostvarenih na ispitu: ");
    scanf("%d", &bodovi);

    if (bodovi >= 0 && bodovi <= 50)
        printf("nedovoljan");
    else if (bodovi >= 51 && bodovi <= 63)
        printf("dovoljan");
    else if (bodovi >= 64 && bodovi <= 76)
        printf("dobar");
    else if (bodovi >= 77 && bodovi <= 89)
        printf("vrlo dobar");
    else if (bodovi >= 90 && bodovi <= 100)
        printf("odlican");
    else
        printf("pogresan unos");
        
    return 0;
}