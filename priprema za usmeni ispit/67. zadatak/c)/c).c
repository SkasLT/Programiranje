#include <stdio.h>

int main()
{
    int num;
    printf("Unesi broj: ");
    scanf("%d", &num);

    while (num > 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }
    return 0;
}