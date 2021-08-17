#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    float pom;
    printf("Unesi cijelobrojni argument funkcije: ");
    scanf("%d", &x);

    if (x == 0)
        printf("Funkicija nije definirana za x = 0.");
    else
        printf("f(%d) = %.2f", x, abs(x - 2) + 1 / (float)x);

    return 0;
}
