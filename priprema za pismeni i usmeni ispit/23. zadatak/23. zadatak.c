#include <stdio.h>

int main(void)
{
    char c;

    printf("Unesi znak: ");
    scanf("%c", &c);

    printf("Invertiranjem vrijednosti %d (ASCII vrijednost znaka %c) dobije se: %d", c, c, c ^ 255);

    return 0;
}