#include <stdio.h>

int main(void)
{
    char a;
    printf("Unesi znak: ");
    scanf("%c", &a);
    printf("%d", a ^ 255);
}