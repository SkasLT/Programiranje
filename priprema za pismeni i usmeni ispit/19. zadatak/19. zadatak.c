#include <stdio.h>

int main(void)
{
    int x = 172;
    int y = 23;
    char c = '%';

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d : %d = %.2f\n", x, y, x / (float)y);
    printf("172 %c 23 = %d\n",c, x % y);
    printf("%d / %d = %d\n", x, y, x / y);
}