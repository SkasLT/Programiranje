#include <stdio.h>

int main(void)
{
    int x, y;
    char operator;

    printf("Unesi 2 broja i njihov operator (+, -, *, /, d, m): ");
    scanf("%d %c %d", &x, &operator, & y);

    switch (operator)
    {
    case '+':
        printf("%d %c %d = %d", x, operator, y, x + y);
        break;
    case '-':
        printf("%d %c %d = %d", x, operator, y, x - y);
        break;
    case '*':
        printf("%d %c %d = %d", x, operator, y, x * y);
        break;
    case '/':
        if (y == 0)
        {
            printf("Pogresan unos, djeljenje s nulom");
            return 1;
        }
        else
            printf("%d %c %d = %.3f", x, operator, y, x / (float)y);
        break;
    case 'd':
        printf("%d %c %d = %d", x, operator, y, x / y);
        break;
    case 'm':
        printf("%d %c %d = %d", x, operator, y, x % y);
        break;
    default:
        printf("Kriva vrijednost operatora, kraj programa");
        return 1;
    }
    return 0;
}