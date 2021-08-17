#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Unesi 4 cijela broja: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //testiranje najveceg:
    if (a > b && a > c && a > d)
        printf("Najveci: %d\n", a);
    else if (b > a && b > c && b > d)
        printf("Najveci: %d\n", b);
    else if (c > a && c > b && c > d)
        printf("Najveci: %d\n", c);
    else if (d > a && d > b && d > c)
        printf("Najveci: %d\n", d);

    //testiranje najmanjeg:
    if (a < b && a < c && a < d)
        printf("Najmanji %d\n", a);
    else if (b < a && b < c && b < d)
        printf("Najmanji: %d\n", b);
    else if (c < a && c < b && c < d)
        printf("Najmanji: %d\n", c);
    else if (d < a && d < b && d < c)
        printf("Najmanji: %d\n", d);

    return 0;
}