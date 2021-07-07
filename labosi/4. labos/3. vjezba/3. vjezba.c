#include <stdio.h>

int main()
{
    int x, y;
    printf("Unesi 2 broja:");
    scanf("%d %d", &x, &y);
    printf("\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f\n%d %% %d = %d\n%d / %d = %d\n", x, y, x + y, x, y, x - y, x, y, x * y, x, y, (float)x / y, x, y, x % y, x, y, x / y);
    return 0;
}