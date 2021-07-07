#include <stdint.h>

int main()
{
    int a, b, c, d, e, f, g, h;
    printf("Unesi ip adresu: \n");
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    printf("Unesi subnet masku: \n");
    scanf("%d.%d.%d.%d", &e, &f, &g, &h);
    printf("ip adresa je: %d.%d.%d.%d", a & e, b & f, c & g, d & h);
    return 0;
}