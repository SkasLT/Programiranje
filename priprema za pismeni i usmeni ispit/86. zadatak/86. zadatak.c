#include <stdio.h>

int main(void)
{
    int br, x, sum, pom;

    printf("Unesi 2 broja: ");
    scanf("%d %d", &br, &x);

    for (int i = 1; i < br; i++)
    {
        pom = i;
        sum = 0;
        while (pom > 0)
        {
            sum += pom % 10;
            pom /= 10;
            if (sum == x && pom == 0)
                printf("%d\n", i);
        }
    }
    return 0;
}