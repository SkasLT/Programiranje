#include <stdio.h>

int Min(int a, int b)
{
    return (a <= b) * a + b * (a > b);
}

int Max(int a, int b)
{
    return (a >= b) * a + b * (a < b);
}

int Provjera(void)
{
    int a;
    do
    {
        printf("Pogresan unos. Ponovite.\n");
        scanf("%d", &a);
    } while (a < -10 || a > 10); //cringe

    return a;
}

float sumaReda(unsigned int n)
{

    if (n == 1)
        return 2. / 3;
}

int main(void)
{
}
