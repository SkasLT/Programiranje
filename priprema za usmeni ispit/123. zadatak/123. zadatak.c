#include <stdio.h>

int Broji(int n)
{
    int counter = 0;
    while (n > 0)
    {
        n /= 10;
        counter++;
    }
    return counter;
}

int Zadnja(int n)
{
    while (n >= 10)
        n /= 10;
    return n;
}

void Okreni(int n)
{
    printf("Inverzni zapis: ");
    if (n == 0)
        printf("0");

    while (n > 0)
    {
        printf("%d", n % 10);
        n /= 10;
    }
    printf("\n");
}

int main(void)
{
    int n;
    do
    {
        printf("Unesi broj n: ");
        scanf("%d", &n);
        printf("Broj znamenki: %d\n", Broji(n));
        printf("Znamenka najvece tezine: %d\n", Zadnja(n));
        Okreni(n);
    } while (n != 0);
}
