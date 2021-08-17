#include <stdio.h>

int main(void)
{
    char a, b, c;
    printf("Unesi 3 broja: ");
    scanf("%c %c %c", &a, &b, &c);

    if ((a < 48 || a > 57) || (b < 48 || b > 57) || (c < 48 || c > 57))
        printf("Pogresan unos");
    else
        printf("%c%c%c", a, b, c);
}