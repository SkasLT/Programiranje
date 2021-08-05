#include <stdio.h>

int main(void)
{
    int x;
    printf("Unesi prethodni broj: ");
    scanf("%d", &x);

    x += 1;

    if (x == 101)
        printf("1");
    else
        printf("%d", x);

    return 0;
}