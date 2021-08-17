#include <stdio.h>

int main(void)
{
    int x;
    float pom;
    printf("Unesi cijelobrojni argument funkcije: ");
    scanf("%d", &x);

    if (x == 0)
        printf("Funkicija nije definirana za x = 0.");
    else
    {
        pom = x - 2;

        if (pom < 0)
            pom *= (-1);

        printf("f(%d) = %.2f", x, pom + 1 / (float)x);
        return 0;
    }
    return 1;
}
