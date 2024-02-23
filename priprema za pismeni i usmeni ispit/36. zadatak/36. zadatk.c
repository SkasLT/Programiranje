#include <stdio.h>

int main(void)
{
    int dan;
    char smjerPutovanja;

    printf("Unesi dan u 4. mjesecu: ");
    scanf("%d", &dan);

    printf("Unesi 'J' za putovanje u proslost ili 'S' za putovanje u buducnost: ");
    scanf(" %c", &smjerPutovanja);

    switch (smjerPutovanja)
    {
    case 'J':
        dan -= 1;

        if (dan == 0)
            printf("31.3.2021");
        else
            printf("%d.4.2021", dan);
        break;

    case 'S':
        dan += 1;

        if (dan == 32)
            printf("1.5.2021");
        else
            printf("%d.4.2021", dan);
        break;
    }
    return 0;
}