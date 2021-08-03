#include <stdio.h>

int main(void)
{
    int x, y;
    char c = '%';

    printf("Unesi 2 cijela broja: ");
    scanf("%d %d", &x, &y);
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d : %d = %.3f\n", x, y, x / (float)y);
    printf("%d %% %d = %d\n", x, y, x % y);
    printf("%d / %d = %d\n", x, y, x / y);
    return 0;
}