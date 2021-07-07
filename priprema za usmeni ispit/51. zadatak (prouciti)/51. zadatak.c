#include <stdio.h>

int main()
{
    int a, b, c, pom, min, max;
    printf("Unesi 1. broj: ");
    scanf("%d", &a);
    a = max;
    printf("Unesi 2. broj: ");
    scanf("%d", &b);
    if (b > a)
    {
        b = max;
        a = min;
    }
    else
        b = min;
    printf("Unesi 3. broj: ");
    scanf("%d", &c);
    if ((c > a) && (c > b))
    {
        c = max;
    }
    else
        c = pom;
    printf("%d %d %d", min, pom, max);
}