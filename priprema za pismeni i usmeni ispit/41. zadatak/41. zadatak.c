#include <stdio.h>

int main(void)
{
    int godina;

    printf("Unesi godinu: ");
    scanf("%d", &godina);

    if (godina < 1 || godina > 2300)
    {
        printf("Pogresan unos");
        return 1;
    }

    else if (godina % 10 != 0)
        printf("%d. stoljece", godina / 100 + 1);

    else
        printf("%d. stoljece", godina / 100);

    return 0;
}